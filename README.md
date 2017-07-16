# Introduction #

QEMU-Pinning: QEMU fork with pinning (affinity) support.

This fork adds the dubious, but still seldomly requested, support for pinning a virtual CPU to a physical one, which is supposed to improve performance.

If somebody could prove or disprove (both are equally useful) the impact of this patch on performance, it would be **very welcome**, as I don't have time and energy to run a significant/well-designed suite of benchmarks/test cases - I've spent a lot of time and energy by setting up and testing the VGA passthrough already.

Pinning was originally an attempt of mine, aimed at speeding up a VGA passthrough (AMD+nVidia) setup with serious performance problems.

Note that CPU pinning is supported in libvirt, but XML is known to cause seizures and PTSD to some users.

# Table of contents #

- [Patch notes](#patch-notes)
- [Repository (git) structure](#repository-git-structure)
- [Executing the QEMU binary](#executing-the-qemu-binary)
- [Compiling QEMU](#compiling-qemu)

# Patch notes #

The code is originally a QEMU 2.4.1 patch [published on the QEMU mailing list](https://www.mail-archive.com/qemu-discuss%40nongnu.org/msg02253.html), which has been adapted to new QEMU versions.

I'm not a C programmer, and I've just blindly applied the patch, with very minor adjustments. The patch is very straightforward though, and I never had any issues.

# Repository (git) structure #

This repository adds data in two forms:

- the patch, applied and adapted to major (or arbitrarily chosen) versions;
- the QEMU binary for the given patch version, compiled on an Ubuntu 16.04 x86-64.

Each branch:

- represents a patched and compiled QEMU
- is named `v<version>-pinning`
- is built on top of the `v<version>` tag from the upstream repository
- has one commit with the patch applied,
- then one commit with the compiled binary

# Executing the QEMU binary #

Generic format:

    $QEMU_BINARY_PATH -vcpu vcpunum=<core_number>,affinity=<core_number> <other_params>

Convenient bash script to assign one virtual CPU per core (*not per thread!*):

    CORES_NUMBER=$(cat /proc/cpuinfo | egrep "core id|physical id" | tr -d "\n" | sed s/physical/\\nphysical/g | grep -v ^$ | sort | uniq | wc -l)

    for core_number in $(seq 1 $CORES_NUMBER); do
      VGAPT_PINNING_PARAMS=" $VGAPT_PINNING_PARAMS -vcpu vcpunum=$((core_number - 1)),affinity=$((core_number - 1))"
    done

    $QEMU_BINARY_PATH $VGAPT_PINNING_PARAMS $OTHER_PARAMS

# Compiling QEMU #

Compiling the binary is very simple.

The following instructions will build the binary on an Ubuntu 16.04 x86-64, with GTK VGA, Pulseaudio, and USB support:

    sudo apt-get install git libglib2.0-dev libfdt-dev libpixman-1-dev zlib1g-dev libgtk-3-dev libpulse-dev libusb-1.0-0-dev libusbredirparser-dev

    THREADS_NUMBER=$(cat /proc/cpuinfo | egrep "core id|physical id" | tr -d "\n" | sed s/physical/\\nphysical/g | grep -v ^$ | wc -l)

    rm -rf bin
    mkdir -p bin/debug/native
    cd !$
    ../../../configure --target-list=x86_64-softmmu --enable-debug --enable-gtk --audio-drv-list=pa
    make -j $THREADS_NUMBER
    cd x86_64-softmmu
    ./qemu-system-x86_64 --version           # test!

For reference, using 8 threads for compiling, on an 6770k (HT) system, is faster than using the number of cores (4).

A few important notes about the build configuration:

- my Ubuntu system is not vanilla, so some libraries may (but not necessarily) be missing from the list above; if this is the case, please create a PR;
- this is a rather minimal build configuration, and it won't have any secondary feature aside the mentioned ones (GTK VGA, Pulseaudio, and USB); if you need more features, you'll need to build QEMU differently.
