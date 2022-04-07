#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := fibonacci.c

BINS := fibonacci

all: fibonacci

fibonacci: fibonacci.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} fibonacci.o -o fibonacci 

fibonacci.o: fibonacci.c
	@echo "Creating...."
	${CC} -c fibonacci.c 

clean:
	@echo "Cleaning up...."
	rm -rvf fibonacci.o fibonacci 
