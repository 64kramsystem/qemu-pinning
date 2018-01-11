#!/bin/bash

set -o errexit

c_required_packages="libglib2.0-dev libfdt-dev libpixman-1-dev zlib1g-dev libgtk-3-dev libpulse-dev libusb-1.0-0-dev libusbredirparser-dev libspice-protocol-dev libspice-server-dev"
c_binary="bin/debug/native/x86_64-softmmu/qemu-system-x86_64"

echo 'Hello! This script will compile the QEMU project.'
echo
echo "It will ask sudo permissions to install the required libraries, if they're not already installed."
echo
echo 'Press any key to continue...'

read -rsn1

v_packages_to_install=""

for package in $c_required_packages; do
  if [[ ! $(dpkg -s "$package" 2> /dev/null) ]]; then
    v_packages_to_install+=" $package"
  fi
done

if [[ "$v_packages_to_install" != "" ]]; then
  echo
  sudo apt-get install $v_packages_to_install
fi

echo

# Using a higher number of jobs, on an i7-6700k, didn't produce any significant improvement,
# but YMMV.
THREADS_NUMBER=$(lscpu --all -p=CPU | grep -v ^# | sort | uniq | wc -l)

rm -rf bin
mkdir -p bin/debug/native

cd bin/debug/native
../../../configure --target-list=x86_64-softmmu --enable-gtk --enable-spice --audio-drv-list=pa
time make -j $THREADS_NUMBER
cd -

echo
echo 'The project is built!'
echo
echo "The binary location is: $c_binary"
echo
echo "Test execution result:"
echo

$c_binary --version

echo
