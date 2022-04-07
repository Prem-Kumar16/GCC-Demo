#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := no_of_digits.c

BINS := no_of_digits

all: no_of_digits

no_of_digits: no_of_digits.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} no_of_digits.o -o no_of_digits 

no_of_digits.o: no_of_digits.c
	@echo "Creating...."
	${CC} -c no_of_digits.c 

clean:
	@echo "Cleaning up...."
	rm -rvf no_of_digits.o no_of_digits 
