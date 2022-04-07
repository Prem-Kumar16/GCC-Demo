#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := avg.c

BINS := avg

all: avg

avg: avg.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} avg.o -o avg 

avg.o: avg.c
	@echo "Creating...."
	${CC} -c avg.c 

clean:
	@echo "Cleaning up...."
	rm -rvf avg.o avg 
