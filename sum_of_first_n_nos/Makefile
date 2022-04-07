#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := sum.c

BINS := sum

all: sum

sum: sum.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} sum.o -o sum 

sum.o: sum.c
	@echo "Creating...."
	${CC} -c sum.c 

clean:
	@echo "Cleaning up...."
	rm -rvf sum.o sum 
