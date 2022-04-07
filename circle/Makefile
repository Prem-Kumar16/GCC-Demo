#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := circle.c

BINS := circle

all: circle

circle: circle.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} circle.o -o circle 

circle.o: circle.c
	@echo "Creating...."
	${CC} -c circle.c 

clean:
	@echo "Cleaning up...."
	rm -rvf circle.o circle 
