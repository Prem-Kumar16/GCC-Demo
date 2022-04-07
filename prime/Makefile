#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := prime.c

BINS := prime

all: prime

prime: prime.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} prime.o -o prime 

prime.o: prime.c
	@echo "Creating...."
	${CC} -c prime.c 

clean:
	@echo "Cleaning up...."
	rm -rvf prime.o prime 
