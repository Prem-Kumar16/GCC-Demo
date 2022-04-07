#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := complex_add.c

BINS := complex_add

all: complex_add

complex_add: complex_add.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} complex_add.o -o complex_add 

complex_add.o: complex_add.c
	@echo "Creating...."
	${CC} -c complex_add.c 

clean:
	@echo "Cleaning up...."
	rm -rvf complex_add.o complex_add 
