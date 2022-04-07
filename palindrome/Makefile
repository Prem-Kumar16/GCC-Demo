#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := palindrome.c

BINS := palindrome

all: palindrome

palindrome: palindrome.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} palindrome.o -o palindrome 

palindrome.o: palindrome.c
	@echo "Creating...."
	${CC} -c palindrome.c 

clean:
	@echo "Cleaning up...."
	rm -rvf palindrome.o palindrome 
