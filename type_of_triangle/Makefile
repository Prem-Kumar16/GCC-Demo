#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := type_of_triangle.c

BINS := type_of_triangle

all: type_of_triangle

type_of_triangle: type_of_triangle.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} type_of_triangle.o -o type_of_triangle 

type_of_triangle.o: type_of_triangle.c
	@echo "Creating...."
	${CC} -c type_of_triangle.c 

clean:
	@echo "Cleaning up...."
	rm -rvf type_of_triangle.o type_of_triangle 
