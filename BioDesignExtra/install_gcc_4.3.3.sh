#!/bin/bash

export ARMELF=$HOME/arm-elf
export WORKAREA=$HOME/wa

mkdir $ARMELF  
mkdir $WORKAREA
 
export PATH=$ARMELF/bin:$PATH  
 
cd $WORKAREA
mkdir down
cd down
wget ftp://ftp.nluug.nl/mirror/languages/gcc/releases/gcc-4.3.3/gcc-4.3.3.tar.bz2
wget http://ftp.sunet.se/pub/gnu/gmp/gmp-4.2.4.tar.bz2
wget http://www.mpfr.org/mpfr-2.4.2/mpfr-2.4.2.tar.bz2
wget http://ftp.download-by.net/gnu/gnu/binutils/binutils-2.18.tar.bz2

cd ..
for zipped in down/* ; do tar xjf $zipped ; done # Note: This may take a while.
ln -s $(pwd)/gmp-4.2.4 gcc-4.3.3/gmp
ln -s $(pwd)/mpfr-2.4.2 gcc-4.3.3/mpfr

cd binutils-2.18/
./configure --srcdir=`pwd` --target=arm-elf --prefix=${ARMELF} --disable-werror
make -j 3
make install
cd ..

ed gcc-4.3.3/gcc/config/arm/t-arm-elf << EOF
/MULTILIB_OPTIONS/s/^M/# M/
/MULTILIB_DIRNAMES/s/^M/# M/
/mno-thumb-interwork/s/^# //
/normal interwork/s/^# //
wq
EOF

# Had to remove --with-cpu=arm9 to compile for A530
mkdir gcc-4.3.3-arm-elf && cd gcc-4.3.3-arm-elf
../gcc-4.3.3/configure --srcdir=../gcc-4.3.3 --target=arm-elf \
 --enable-multilib --enable-languages=c --enable-clocale=gnu \
 --disable-libm --disable-libc --disable-threads \
 --disable-nls --disable-libssp --disable-intl \
 --with-newlib --prefix=${ARMELF}
(unset LIBRARY_PATH; unset CFLAGS; make -j 3 && make install) # Change "3" to "your systems number of cores" + 1
