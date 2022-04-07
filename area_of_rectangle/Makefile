#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := area.c

BINS := area

all: area

area: area.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} area.o -o area 

area.o: area.c
	@echo "Creating...."
	${CC} -c area.c 

clean:
	@echo "Cleaning up...."
	rm -rvf area.o area 
