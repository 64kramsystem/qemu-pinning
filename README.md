# QEMU-Pinning: QEMU fork with pinning (affinity) support

Fork of QEMU, with support for pinning virtual cpus/cores/threads to the physical counterparts.

## Table of contents

- [Patch notes](#patch-notes)
- [Downloading and executing the QEMU binary](#downloading-and-executing-the-qemu-binary)
- [Compiling QEMU](#compiling-qemu)
- [Repository (git) structure](#repository-git-structure)
- [Why not libvirt?](#why-not-libvirt)

## Patch notes

The code was originally a QEMU 2.4.1 patch [published on the QEMU mailing list](https://www.mail-archive.com/qemu-discuss%40nongnu.org/msg02253.html), which has been adapted to new QEMU versions.

I've made a few fixes/cleanups, and applied it to all the subsequent QEMU versions.

Pinning is accomplished using the Linux interfaces `cpu_set_t` (and related macros) and `pthread_setaffinity_np`.

## Downloading and executing the QEMU binary

The binary is located under `bin/debug/native/x86_64-softmmu/qemu-system-x86_64`.

Those who prefer a quick link, can directly download the binary [from the pinning master tag](https://raw.githubusercontent.com/saveriomiroddi/qemu-pinning/pinning_release/bin/debug/native/x86_64-softmmu/qemu-system-x86_64).

For displaying the patch in a single commit, see the repository structure [section](#repository-git-structure).

### Generic execution

Pinning (-related) QEMU options:

    -smp <total_vcpus>,cores=<vcores>,sockets=<vsockets>,threads=<vthreads>
    -vcpu vcpunum=<vcpu_number>,affinity=<host_cpu_number>

Convenient bash script to assign one virtual CPU per core (*not per thread*):

    CORES_NUMBER=$(lscpu --all -p=CORE | grep -v ^# | sort | uniq | wc -l)

    SMP_PARAMS="-smp $CORES_NUMBER,cores=$CORES_NUMBER,sockets=1,threads=1"

    for core_number in $(seq 1 $CORES_NUMBER); do
      PINNING_PARAMS=" $PINNING_PARAMS -vcpu vcpunum=$((core_number - 1)),affinity=$((core_number - 1))"
    done

    $QEMU_BINARY_PATH $SMP_PARAMS $PINNING_PARAMS $OTHER_PARAMS

### More advanced execution

It's possible to have more complex configurations. For example, a typical configuration is to give all cores (and threads) to the guest, with the exception of one core.

First, one needs to obtain the host cpu layout; a simple way is:

    $ lscpu --extended

    CPU NODE SOCKET CORE L1d:L1i:L2:L3 ONLINE MAXMHZ    MINMHZ
    0   0    0      0    0:0:0:0       yes    4200,0000 800,0000
    1   0    0      1    1:1:1:0       yes    4200,0000 800,0000
    2   0    0      2    2:2:2:0       yes    4200,0000 800,0000
    3   0    0      3    3:3:3:0       yes    4200,0000 800,0000
    4   0    0      0    0:0:0:0       yes    4200,0000 800,0000
    5   0    0      1    1:1:1:0       yes    4200,0000 800,0000
    6   0    0      2    2:2:2:0       yes    4200,0000 800,0000
    7   0    0      3    3:3:3:0       yes    4200,0000 800,0000

`CPU` represents a CPU from a Linux perspective, therefore, if the CPU supports SMT ("Hyper-threading" on Intel), each `CPU` is a thread.  
In this case, for example, `CORE 0` will have two threads, represented by `CPU 0` and `CPU 4`.

With the configuration above, and the objective of passing all except one core, the pinning parameters are:

    -smp 6,cores=3,sockets=1,threads=2
    -vcpu vcpunum=0,affinity=1 -vcpu vcpunum=1,affinity=5
    -vcpu vcpunum=2,affinity=2 -vcpu vcpunum=3,affinity=6
    -vcpu vcpunum=4,affinity=3 -vcpu vcpunum=5,affinity=7

Such configuration will yield, in a Windows guest, 3 physical processors with 2 logical processors each, mapped to the host `CPU`s (1,5), (2,6) and (3,7).

This can be verified in Windows guests, using the [Coreinfo tool](https://docs.microsoft.com/en-us/sysinternals/downloads/coreinfo).  
Note that according to this this result, QEMU exposes the threads (vcpus) sequentially, and Windows interprets physical processors as contiguous blocks.

The "-1 core" configuration can be be automated with an interesting exercise in scripting:

    # lscpu parse format: CPU,Core,Socket,Node
    
    # Exclude the core 0, and cluster the threads, sorted by (socket,node)
    CPUS_DATA=$(lscpu --all --parse | grep -vP '^(#|\d,0,0,0)' | sort -t ',' -n -k 3,2)
    
    THREADS=$(echo $CPUS_DATA | wc -l)
    CORES=$(echo $CPUS_DATA | cut -d ',' -f 2 | sort | uniq | wc -l)
    SOCKETS=$(echo $CPUS_DATA | cut -d ',' -f 3 | sort | uniq | wc -l)
    
    QEMU_SMP="-smp $THREADS,cores=$CORES,threads=$(($THREADS / $CORES))"
    
    vcpu=0; while read -a cpu_entry; do
      affinity=$(echo $cpu_entry | cut -d ',' -f 1)
      QEMU_AFFINITIES="$QEMU_AFFINITIES -vcpu vcpunum=$vcpu,affinity=$affinity"
      vcpu=$(($vcpu + 1))
    done <<< "$CPUS_DATA"
    
    echo "$QEMU_SMP $QEMU_AFFINITIES"

### Multi-socket CPUs

This patch should also support sockets, but couldn't be tested on my machine.

## Compiling QEMU

Compiling the binary is very simple.

The following instructions will build the binary on an Ubuntu 16.04 x86-64, with support for GTK display, SPICE/QXL VGA, PulseAudio, and USB:

    sudo apt-get install git libglib2.0-dev libfdt-dev libpixman-1-dev zlib1g-dev libgtk-3-dev libpulse-dev libusb-1.0-0-dev libusbredirparser-dev libspice-protocol-dev libspice-server-dev

    THREADS_NUMBER=$(lscpu --all -p=CPU | grep -v ^# | sort | uniq | wc -l)

    rm -rf bin
    mkdir -p bin/debug/native
    cd bin/debug/native
    ../../../configure --target-list=x86_64-softmmu --enable-debug --enable-gtk --enable-spice --audio-drv-list=pa
    make -j $THREADS_NUMBER
    cd x86_64-softmmu
    ./qemu-system-x86_64 --version           # test!

For reference, using 8 threads for compiling, on an 6770k (HT) system, is faster than using the number of cores (4).

A few important notes about the build configuration:

- my Ubuntu system is not vanilla, so some libraries may (but not necessarily) be missing from the list above; if this is the case, please create a PR;
- this is a rather minimal build configuration, and it won't have any secondary feature aside the mentioned ones (GTK VGA, Pulseaudio, and USB); if you need more features, you'll need to build QEMU differently.

## Repository (git) structure

The master branch is the QEMU repository downstream, with the `README.md` added.

The reference patched tree is the `pinning_release` tag, which contains the patch and the latest QEMU release version, patched and compiled.

Previous release versions, patched and compiled, are in the `v<versions>-pinning` branches.

The latest patch version (applied to the latest QEMU release version) is always the `pinning_release~` commit, so it can be displayed:

- from the commandline: `git show pinning_release~`
- from the github web interface: `https://github.com/saveriomiroddi/qemu-pinning/commit/pinning_release~`

Other patch versions can bee displayed using the version tag reference, e.g. `v2.9.1-pinning~`

## Why not libvirt?

I've found libvirt to be a very interesting idea, but ultimately, a leaky abstraction:

1. the compatibility with all the QEMU versions is not guaranteed (currently, 2.10 is not supported)
2. the typical GUI (`virt-manager`) is poor (I had to manually edit many entries via `virsh edit`)
3. since the ultimate reference is QEMU, one ends up thinking how to make things work with QEMU, then finding the libvirt configuration counterpart

Point 3 may be caused by my poor libvirt knowledge, but the fact that libvirt's functionality is built on top of QEMU always stands, and complex QEMU configurations are bound to have translation challenges.

I'm sure of course, that for simple setups, `libvirt` + `virt-manager` may work very well.
