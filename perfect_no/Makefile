#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := perfect_no.c

BINS := perfect_no

all: perfect_no

perfect_no: perfect_no.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} perfect_no.o -o perfect_no 

perfect_no.o: perfect_no.c
	@echo "Creating...."
	${CC} -c perfect_no.c 

clean:
	@echo "Cleaning up...."
	rm -rvf perfect_no.o perfect_no 
