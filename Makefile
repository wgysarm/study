
#KDIR = /home/smdt/develop/lichee/linux-3.4
KDIR = /usr/src/linux-headers-3.2.0-23-generic
obj-m:=hello.o

modules:
	make -C $(KDIR) M=`pwd`
clean:
	make -C $(KDIR) M=`pwd` clean

