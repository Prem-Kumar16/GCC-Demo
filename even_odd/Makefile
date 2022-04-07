#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := .c

BINS := even_odd

all: even_odd

even_odd: even_odd.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} even_odd.o -o even_odd 

even_odd.o: even_odd.c
	@echo "Creating...."
	${CC} -c even_odd.c 

clean:
	@echo "Cleaning up...."
	rm -rvf even_odd.o even_odd 
