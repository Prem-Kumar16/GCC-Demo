#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := si.c

BINS := si

all: si

si: si.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} si.o -o si 

si.o: si.c
	@echo "Creating...."
	${CC} -c si.c 

clean:
	@echo "Cleaning up...."
	rm -rvf si.o si 
