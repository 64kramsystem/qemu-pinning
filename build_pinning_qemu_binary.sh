#!/bin/bash

set -o pipefail
set -o errexit
set -o nounset
set -o errtrace
shopt -s inherit_errexit

v_architecture="x86_64"
v_enable_prompts=1    # empty: false
v_run_configure=1     # empty: false
v_enable_debug=       # empty: false
v_samba_share_tweaks= # empty: false

c_help="Usage: $(basename "$0") [-h|--help] [(--t|--target)=arch] [-C|--skip-configure] [-s|--samba-share-tweaks] [-y|--yes] [-d|--debug]

QEMU-pinning helper script.

The default target architecture is '$v_architecture'; use \`--target\` to customize. Other options: \`riscv64\`, etc.

The directory \`bin\` is _not_cleaned; if the build has any issue, try \`rm -rf bin\`.

Options:

- \`--yes\`            : disable prompts
- \`--skip-configure\` : disable \`./configure\` execution (saves time on rebuild)
- \`--debug\`          : enable debug support: add debug info to the binary; disable optimizations; print threads ids
- \`--samba-share-tweaks\` : allow symlinks access to the QEMU Samba share; use \$SUDO_USER, when present

The project is built using all the hardware threads.

The script has been tested on the following operating systems:

- Ubuntu 16.04/18.04/20.04
- Linux Mint 19
- Fedora 28

it may work on other versions, and other distros (eg. Debian/RHEL).
"

function show_prompt {
  if [[ -n $v_enable_prompts ]]; then
    echo "Press any key to continue...
"

    read -rsn1
  fi
}

function decode_cmdline_params {
  eval set -- "$(getopt --options ht:Cyds --long help,target:,skip-configure,yes,debug,samba-share-tweaks --name "$(basename "$0")" -- "$@")"

  while true ; do
    case "$1" in
      -h|--help)
        echo "$c_help"
        exit 0 ;;
      -t|--target)
        v_architecture="$2"
        shift 2 ;;
      -C|--skip-configure)
        v_run_configure=
        shift ;;
      -y|--yes)
        v_enable_prompts=
        shift ;;
      -d|--debug)
        v_enable_debug=1
        shift ;;
      -s|--samba-share-tweaks)
        v_samba_share_tweaks=1
        shift ;;
      --)
        shift
        break ;;
    esac
  done
}

function setup_logging {
  logfile="$(dirname "$(mktemp)")/$(basename "$0").log"

  exec 5> "$logfile"
  BASH_XTRACEFD=5
  set -x
}

function print_intro {
  echo "Hello! This script will compile the QEMU project.

Building for architecture \`$v_architecture\`.

Run \`$(basename "$0")\` for the options and further help.
"

  show_prompt
}

function install_dependencies {
  # ID_LIKE would be a better choice, however, Fedora includes only ID.
  os_id=$(perl -ne 'print "$1" if /^ID=(.*)/' /etc/os-release)

  case $os_id in
  ubuntu|debian|linuxmint)
    if dpkg --compare-versions "$(lsb_release -rs 2> /dev/null)" ge "24.10"; then
      >&2 echo "Add support for blkio"
      exit 1
    fi

    c_required_packages=(
      flex
      ninja-build
      libaio-dev
      libbpf-dev
      libcap-ng-dev
      libcapstone-dev
      libfdt-dev
      libfuse3-dev
      libglib2.0-dev
      libgtk-3-dev
      liblzo2-dev
      libnuma-dev
      libpixman-1-dev
      libpulse-dev
      libsdl2-image-dev
      libseccomp-dev
      libspice-protocol-dev
      libspice-server-dev
      liburing-dev
      libusb-1.0-0-dev
      libusbredirparser-dev
      libvirglrenderer-dev
      libxdp-dev
      zlib1g-dev
    )
    package_manager_binary=apt-get
    ;;
  fedora|rhel)
    c_required_packages=(
      flex
      git
      ninja-build
      capstone-devel
      fuse3-devel
      glib2-devel
      gtk3-devel
      libaio-devel
      libbpf-devel
      libcap-devel
      libcap-ng-devel
      libfdt-devel
      libiscsi-devel
      libseccomp-devel
      liburing-devel
      libusbx-devel
      libxdp-devel
      lzo-devel
      numactl-devel
      pixman-devel
      pulseaudio-libs-devel
      SDL2_image-devel
      spice-server-devel
      virglrenderer-devel
      zlib-devel
    )
    package_manager_binary=dnf
    ;;
  *)
    echo
    echo "Unsupported operating system (ID=$os_id)!"
    exit 1
    ;;
  esac

  v_packages_to_install=()

  for package in "${c_required_packages[@]}"; do
    if [[ ! $(dpkg -s "$package" 2> /dev/null) ]]; then
      v_packages_to_install+=("$package")
    fi
  done

  if [[ ${#v_packages_to_install[@]} -gt 0 ]]; then
    echo "The following required libraries will be installed: ${v_packages_to_install[*]}.
"
    show_prompt

    sudo "$package_manager_binary" install -y "${v_packages_to_install[@]}"
  fi
}

function compile_project {
  # Using a higher number of jobs, on an i7-6700k, didn't produce any significant improvement,
  # but YMMV.
  threads_number=$(nproc)

  mkdir -p bin/debug/native

  cd bin/debug/native

  local extra_configure_opts=()

  if [[ -n $v_enable_debug ]]; then
    extra_configure_opts+=(--enable-debug-info --extra-cflags='-O0 -DPRINT_THREADS_IDS')
  fi

  if [[ -n $v_samba_share_tweaks ]]; then
    extra_configure_opts+=(--extra-cflags='-DSAMBA_SHARE_TWEAKS')
  fi

  if [[ -n $v_run_configure ]]; then
    # Using Mold (v2.35.0; `--extra-ldflags="-fuse-ld=mold"`) didn't significantly improve compilation
    # speed.

    ../../../configure \
      --target-list="$v_architecture-softmmu,$v_architecture-linux-user" \
      --disable-docs \
      --audio-drv-list=pa \
      --enable-af-xdp \
      --enable-fuse \
      --enable-gtk \
      --enable-linux-aio \
      --enable-linux-io-uring \
      --enable-lto \
      --enable-numa \
      --enable-numa \
      --enable-sdl \
      --enable-seccomp \
      --enable-spice \
      --enable-strip \
      --enable-virglrenderer \
      "${extra_configure_opts[@]}"
  fi

  time make -j "$threads_number"

  cd - > /dev/null
}

function print_outro {
  system_emu_built_binary=$(readlink -f "bin/debug/native/qemu-system-$v_architecture")
  user_emu_built_binary=$(readlink -f "bin/debug/native/qemu-$v_architecture")

  echo "
The project is built!

The binary locations are:

- $system_emu_built_binary -> full system emulator
- $user_emu_built_binary -> only executes binaries

Test execution results:

$("$system_emu_built_binary" --version)

$("$user_emu_built_binary" --version)
"
}

decode_cmdline_params "$@"
print_intro
setup_logging
install_dependencies
compile_project
print_outro
