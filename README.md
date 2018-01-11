# QEMU-Pinning: QEMU fork with pinning (affinity) support

Fork of QEMU, with support for pinning virtual cpus/cores/threads to the physical counterparts.

- [QEMU-Pinning: QEMU fork with pinning (affinity) support](#qemu-pinning-qemu-fork-with-pinning-affinity-support)
  - [Status](#status)
  - [Patch notes](#patch-notes)
  - [Building the project](#building-the-project)
  - [Pinning comamndline options](#pinning-comamndline-options)
  - [Common pinning scenarios/scripts, and Windows mapping](#common-pinning-scenariosscripts-and-windows-mapping)
    - [One vCPU per core](#one-vcpu-per-core)
    - [One vCPUs per core/thread, except one core](#one-vcpus-per-corethread-except-one-core)
    - [Arbitrary number of vCPUs](#arbitrary-number-of-vcpus)
  - [Verifying the pinning](#verifying-the-pinning)
  - [Multi-socket CPUs](#multi-socket-cpus)
  - [Performance](#performance)
  - [Repository (git) structure](#repository-git-structure)
  - [Why not libvirt?](#why-not-libvirt)

## Status

This project is "semi-discontinued", due to lack of resources (QEMU developers often refactor the codebase, which sometimes makes updating the patch non-trivial for a dev without domain knowledge).

I will sync `master` with new QEMU versions, unless cases where the patch has conflicts that I can't easily solve; in such situations, I will open an issue tagged with `help wanted`. Users can open issues for general problems, but I can't guarantee solving them (I'll also label such issues with `help wanted`).

I maintain branches with all the previous patched versions, so if at any point in time, the latest QEMU hasn't been patched, an older version can be used.

Thanks to the user [arcnx](https://github.com/arcnmx), who made the patch compatible with v6.2.

The user [igrekster](https://github.com/igrekster) has kindly [contributed a Python script](https://github.com/64kramsystem/qemu-pinning/wiki/Python-pinning-script) for pinning the QEMU processes without patching QEMU. Users wishing to improve it can open a (phony) PR or contact me directly (find the contacts in my [profile page](https://github.com/64kramsystem)).

## Patch notes

The code was originally a QEMU 2.4.1 patch [published on the QEMU mailing list](https://www.mail-archive.com/qemu-discuss%40nongnu.org/msg02253.html); I've made significant fixes/cleanups/improvements, and I periodically rebase/update/extend it on top of the release QEMU versions.

Pinning is accomplished using the Linux interfaces `cpu_set_t` (and related macros) and `pthread_setaffinity_np`.

There is one addition (separated from pinning) in this fork:

- allowing Samba symlink access; use $SUDO_USER, when present

And an option is provided to enable easy(er) to debug builds.

See the build script help (`build_pinning_qemu_binary.sh --help`) for the details.

## Building the project

A script is provided in order to build the project on common Linux distros, and to enable additional features.

From the project root, run:

```sh
# Add `--help` to display the help.
#
./build_pinning_qemu_binary.sh
```

The project will build, and display the locations of the binaries (system/user emulators).

A few important notes:

- this is a rather minimal build configuration, and it won't have any secondary feature aside the mentioned ones (GTK VGA, Pulseaudio, USB, AIO); if you need more features, you can easily alter the `./configure` command in the build script;
- if the binary is moved to another location, BIOS files may need to be moved as well (e.g. the `pc-bios` directory for the x86-64 architecture).

It's trivial to adjust the script to run it on other distributions.

## Pinning comamndline options

Pinning is exposed through the `-vcpu` commandline option; this is the generic structure of a pinned execution:

```sh
qemu-system-x86_64 \
  -smp $total_vcpus,cores=$vcores,sockets=$vsockets,threads=$vthreads \
  -vcpu vcpunum=$vcpu_number,affinity=$host_processor_number \
  -vcpu vcpunum=$vcpu_number,affinity=$host_processor_number \
  ...
```

The following section will show common pinning scenarios, and convenient scripts that prepare them.

## Common pinning scenarios/scripts, and Windows mapping

The scenarios in this section (except where specified) apply to a processor with the following topology (a Ryzen 7 3800x):

```
$ lstopo --of console --no-io --no-caches

Machine (31GB total) + Package L#0
  NUMANode L#0 (P#0 31GB)
  Core L#0
    PU L#0 (P#0)
    PU L#1 (P#8)
  Core L#1
    PU L#2 (P#1)
    PU L#3 (P#9)
  Core L#2
    PU L#4 (P#2)
    PU L#5 (P#10)
  Core L#3
    PU L#6 (P#3)
    PU L#7 (P#11)
  Core L#4
    PU L#8 (P#4)
    PU L#9 (P#12)
  Core L#5
    PU L#10 (P#5)
    PU L#11 (P#13)
  Core L#6
    PU L#12 (P#6)
    PU L#13 (P#14)
  Core L#7
    PU L#14 (P#7)
    PU L#15 (P#15)
```

Empyrically, based on the scripts presented here, QEMU exposes the threads (vcpus) sequentially, and Windows interprets physical processors as contiguous blocks.

Therefore, if one wants to, say, pin core 0 and its two threads, they need to pass:

```
-smp 2,cores=1,sockets=1,threads=2 -vcpu vcpunum=0,affinity=0 -vcpu vcpunum=1,affinity=8
```

### One vCPU per core

Assign one virtual CPU per host core (*not per thread*):

```sh
CORES_NUMBER=$(lscpu --all -p=CORE | grep -v '^#' | sort | uniq | wc -l)

SMP_PARAMS="  -smp $CORES_NUMBER,cores=$CORES_NUMBER,sockets=1,threads=1"

for core_number in $(seq 1 $CORES_NUMBER); do
  SMP_PARAMS+="  \\
  -vcpu vcpunum=$((core_number - 1)),affinity=$((core_number - 1))"
done

echo "$SMP_PARAMS"
#  -smp 8,cores=8,sockets=1,threads=1  \
#  -vcpu vcpunum=0,affinity=0  \
#  -vcpu vcpunum=1,affinity=1  \
#  -vcpu vcpunum=2,affinity=2  \
#  -vcpu vcpunum=3,affinity=3  \
#  -vcpu vcpunum=4,affinity=4  \
#  -vcpu vcpunum=5,affinity=5  \
#  -vcpu vcpunum=6,affinity=6  \
#  -vcpu vcpunum=7,affinity=7
```

### One vCPUs per core/thread, except one core

A typical configuration is to give all hardware cores/threads to the guest, with the exception of one core.

First, one needs to obtain the host cpu layout; a simple way is:

```sh
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
```

`CPU` represents a CPU from a Linux perspective, therefore, if the CPU supports SMT ("Hyper-threading" on Intel), each `CPU` is a thread.  
In this case, for example, `CORE 0` will have two threads, represented by `CPU 0` and `CPU 4`.

With the configuration above, and the objective of passing all except one core, the pinning parameters are:

```
-smp 6,cores=3,sockets=1,threads=2
-vcpu vcpunum=0,affinity=1 -vcpu vcpunum=1,affinity=5
-vcpu vcpunum=2,affinity=2 -vcpu vcpunum=3,affinity=6
-vcpu vcpunum=4,affinity=3 -vcpu vcpunum=5,affinity=7
```

This will yield, in a Windows guest, 3 physical processors with 2 logical processors each, mapped to the host `CPU`s (1,5), (2,6) and (3,7).

The configuration above can be be automated with:

```sh
# Exclude the core 0, and cluster the threads, sorted by (socket,core)
CPUS_DATA=$(lscpu --all --parse=SOCKET,CORE,CPU | grep -vP '^(#|0,0)' | sort -t ',' -n)

THREADS=$(echo "$CPUS_DATA" | wc -l)
CORES=$(echo "$CPUS_DATA" | cut -d ',' -f 2 | sort | uniq | wc -l)
SOCKETS=$(echo "$CPUS_DATA" | cut -d ',' -f 1 | sort | uniq | wc -l)

SMP_PARAMS="  -smp $THREADS,cores=$CORES,threads=$(($THREADS / $CORES))"

vcpu=0; while read cpu_entry; do
  affinity=$(echo $cpu_entry | cut -d ',' -f 3)
  SMP_PARAMS+="  \\
  -vcpu vcpunum=$vcpu,affinity=$affinity"
  vcpu=$(($vcpu + 1))
done <<< "$CPUS_DATA"

echo "$SMP_PARAMS"
#  -smp 14,cores=7,threads=2  \
#  -vcpu vcpunum=0,affinity=1  \
#  -vcpu vcpunum=1,affinity=9  \
#  -vcpu vcpunum=2,affinity=10  \
#  -vcpu vcpunum=3,affinity=2  \
#  -vcpu vcpunum=4,affinity=11  \
#  -vcpu vcpunum=5,affinity=3  \
#  -vcpu vcpunum=6,affinity=12  \
#  -vcpu vcpunum=7,affinity=4  \
#  -vcpu vcpunum=8,affinity=13  \
#  -vcpu vcpunum=9,affinity=5  \
#  -vcpu vcpunum=10,affinity=14  \
#  -vcpu vcpunum=11,affinity=6  \
#  -vcpu vcpunum=12,affinity=15  \
#  -vcpu vcpunum=13,affinity=7
```

### Arbitrary number of vCPUs

The following script, courtesy of Frédéric Pétrot (University of Grenoble), prepare a pinning for an arbitrary number of vCPUs, passed to the script:

```sh
#!/bin/bash

if test -z "$1"; then
  echo "$0: Please provide the number of virtual cpus"
  exit
fi

nvcpus=$1

# Chosing to sort in such a way that it is easier to see if there is a bug in the program :)
CPUS_DATA=$(lscpu --all --parse=SOCKET,CORE,CPU | grep -vP '^(#)' | sort -t ',' -k 1,1n -k 2,2n -k 3,3n)

declare CPUS_ENTRY
i=0; while read cpu_entry; do
  CPUS_ENTRY[$i]=$cpu_entry
  i=$(($i + 1))
done <<< "$CPUS_DATA"
cpus=$(nproc)

THREADS=$(echo "$CPUS_DATA" | wc -l)
CORES=$(echo "$CPUS_DATA" | cut -d ',' -f 2 | sort | uniq | wc -l)
SOCKETS=$(echo "$CPUS_DATA" | cut -d ',' -f 1 | sort | uniq | wc -l)

# A bit of a wild guess, ...
threads=$(($THREADS/$CORES))
cores=$(($(($nvcpus + 1))/$threads))

QEMU_SMP="  -smp $nvcpus,cores=$cores,threads=$threads"

for vcpu in $(seq 0 $(($nvcpus - 1))); do
  affinity=$(echo ${CPUS_ENTRY[$(($vcpu%$cpus))]} | cut -d ',' -f 3)
  QEMU_AFFINITIES="$QEMU_AFFINITIES  \\
  -vcpu vcpunum=$vcpu,affinity=$affinity"
done

echo "$QEMU_SMP $QEMU_AFFINITIES"
```

Result of `vcpu-assign.sh 10`:

```sh
  -smp 10,cores=5,threads=2   \
  -vcpu vcpunum=0,affinity=0  \
  -vcpu vcpunum=1,affinity=8  \
  -vcpu vcpunum=2,affinity=1  \
  -vcpu vcpunum=3,affinity=9  \
  -vcpu vcpunum=4,affinity=2  \
  -vcpu vcpunum=5,affinity=10  \
  -vcpu vcpunum=6,affinity=3  \
  -vcpu vcpunum=7,affinity=11  \
  -vcpu vcpunum=8,affinity=4  \
  -vcpu vcpunum=9,affinity=12
```

## Verifying the pinning

Pinning can be verified in many ways.

An easy one is to use `htop` on the host, and the Microsoft-advised [Cpu Stress tool](https://blogs.msdn.microsoft.com/vijaysk/2012/10/26/tools-to-simulate-cpu-memory-disk-load) on the guest, then rotate the affinity via Task Manager.

The procedure is:

- run `htop` on the host
- start the guest
- run the CPI Stress tool, using 1 thread active, with `Maximum` activity
- open the Task manager, `Details` tab
- right click on `CPUSTRES.EXE`
- now set one CPU at a time, and check which CPU will have 100% occupation on the host

Don't forget that the Windows CPU (thread) indexes won't match the Linux ones!

## Multi-socket CPUs

This patch should also support multi-socket CPUs.

## Performance

Pinning does not necessarily improve the performance; in some cases, it may actually worsen, therefore, when enabling it, users should carefully test the impact on the given use case.

In general terms, the pinned processors should be excluded from the kernel scheduling (`isolcpus` boot option). Under normal conditions, at least in terms of throughput, the Linux kernel does a good job at scheduling.

Performance testing with pinning has been the subject of the research paper "To Pin or Not to Pin: Asserting the Scalability of QEMU Parallel Implementation".

## Repository (git) structure

Since this fork needs to strictly adhere to the upstream git structure, a system of branches has been established, in order to keep the changes compartmentalized and easy to inspect/track.

The `master` branch is always the latest QEMU stable version (generally, with a lag of a few days, unless there are specific issues), with the latest versions of the patches and the build script.

The fork commits are (in order from HEAD):

1. pinning patch
2. building script; `README.md`; gitignore update
3. other patches, e.g. Samba symlinks access

The repository contains the line of historical branches `vX.Y.Z-pinning`, which are snapshots of previous stable versions, and the corresponding `vX.Y.Z-pinning-changes` branches.

## Why not libvirt?

I've found libvirt to be a very interesting idea, but ultimately, a leaky abstraction:

1. the compatibility with all the QEMU versions is not guaranteed (for example, v2.10 wasn't supported for some time after release);
2. the typical GUI (`virt-manager`) is poor (many entries must be edited via `virsh edit`);
3. since the ultimate reference is QEMU, one ends up thinking how to make things work with QEMU, then finding the libvirt configuration counterpart.

Point 3 may be caused by my poor libvirt knowledge, but the fact that libvirt's functionality is built on top of QEMU always stands, and complex QEMU configurations are bound to have translation challenges.

I'm sure of course, that for simple setups, `libvirt` + `virt-manager` may work very well.
