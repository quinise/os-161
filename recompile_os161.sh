#/bin/bash

cd $HOME/sos_os/lab2/os161-1.11/
./configure --ostree=$HOME/sos_os/lab2/root --toolprefix=mips-harvard-os161-
cd kern/conf
./config ASST0
cd ../compile/ASST0
make depend
make
make install















