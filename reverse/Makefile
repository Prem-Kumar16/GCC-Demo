#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := reverse.c

BINS := reverse

all: reverse

reverse: reverse.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} reverse.o -o reverse 

reverse.o: reverse.c
	@echo "Creating...."
	${CC} -c reverse.c 

clean:
	@echo "Cleaning up...."
	rm -rvf reverse.o reverse 
