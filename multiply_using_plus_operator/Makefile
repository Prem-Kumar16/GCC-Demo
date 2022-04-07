#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := mul.c

BINS := mul

all: mul

mul: mul.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} mul.o -o mul 

mul.o: mul.c
	@echo "Creating...."
	${CC} -c mul.c 

clean:
	@echo "Cleaning up...."
	rm -rvf mul.o mul 
