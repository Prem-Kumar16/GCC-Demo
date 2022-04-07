#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := f_to_c.c

BINS := f_to_c

all: f_to_c

f_to_c: f_to_c.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} f_to_c.o -o f_to_c 

f_to_c.o: f_to_c.c
	@echo "Creating...."
	${CC} -c f_to_c.c 

clean:
	@echo "Cleaning up...."
	rm -rvf f_to_c.o f_to_c 
