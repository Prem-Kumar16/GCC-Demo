#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := feet_to_inch.c

BINS := feet_to_inch

all: feet_to_inch

feet_to_inch: feet_to_inch.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} feet_to_inch.o -o feet_to_inch 

feet_to_inch.o: feet_to_inch.c
	@echo "Creating...."
	${CC} -c feet_to_inch.c 

clean:
	@echo "Cleaning up...."
	rm -rvf feet_to_inch.o feet_to_inch 
