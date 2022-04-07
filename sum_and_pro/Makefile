#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := sum_and_pro.c

BINS := sum_and_pro

all: sum_and_pro

sum_and_pro: sum_and_pro.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} sum_and_pro.o -o sum_and_pro 

sum_and_pro.o: sum_and_pro.c
	@echo "Creating...."
	${CC} -c sum_and_pro.c 

clean:
	@echo "Cleaning up...."
	rm -rvf sum_and_pro.o sum_and_pro 
