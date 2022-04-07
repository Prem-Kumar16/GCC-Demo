#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := salary.c

BINS := salary

all: salary

salary: salary.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} salary.o -o salary 

salary.o: salary.c
	@echo "Creating...."
	${CC} -c salary.c 

clean:
	@echo "Cleaning up...."
	rm -rvf salary.o salary 
