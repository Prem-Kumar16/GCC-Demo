#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := largest.c

BINS := largest

all: largest

largest: largest.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} largest.o -o largest 

largest.o: largest.c
	@echo "Creating...."
	${CC} -c largest.c 

clean:
	@echo "Cleaning up...."
	rm -rvf largest.o largest 
