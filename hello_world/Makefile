#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := hello_world.c

BINS := hello_world

all: hello_world

hello_world: hello_world.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} hello_world.o -o hello_world 

hello_world.o: hello_world.c
	@echo "Creating...."
	${CC} -c hello_world.c 

clean:
	@echo "Cleaning up...."
	rm -rvf hello_world.o hello_world 
