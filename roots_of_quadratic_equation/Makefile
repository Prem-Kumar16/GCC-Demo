#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := roots_of_quad_eqn.c

BINS := roots_of_quad_eqn

all: roots_of_quad_eqn

roots_of_quad_eqn: roots_of_quad_eqn.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} roots_of_quad_eqn.o -o roots_of_quad_eqn 

roots_of_quad_eqn.o: roots_of_quad_eqn.c
	@echo "Creating...."
	${CC} -c roots_of_quad_eqn.c 

clean:
	@echo "Cleaning up...."
	rm -rvf roots_of_quad_eqn.o roots_of_quad_eqn 
