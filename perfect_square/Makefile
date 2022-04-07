#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := perfect_square.c

BINS := perfect_square

all: perfect_square

perfect_square: perfect_square.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} perfect_square.o -o perfect_square 

perfect_square.o: perfect_square.c
	@echo "Creating...."
	${CC} -c perfect_square.c 

clean:
	@echo "Cleaning up...."
	rm -rvf perfect_square.o perfect_square 
