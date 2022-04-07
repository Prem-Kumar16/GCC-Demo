#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := table.c

BINS := table

all: table

table: table.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} table.o -o table 

table.o: table.c
	@echo "Creating...."
	${CC} -c table.c 

clean:
	@echo "Cleaning up...."
	rm -rvf table.o table 
