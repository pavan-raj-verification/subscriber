TARGET=a.out
OBJS=src/subscriber.o
TOPDIR=${PWD}

CFLAGS=-I${TOPDIR}/inc

all:$(TARGET)

$(TARGET):$(OBJS)
	gcc $^ -o $@
