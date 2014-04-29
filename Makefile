obj-m += rooty.o
#KERNEL_DIR = /lib/modules/$(shell uname -r)/build
#PWD = $(shell pwd)
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	rm -rf *.o *.ko *.symvers *.mod.* *.order .rooty.*
