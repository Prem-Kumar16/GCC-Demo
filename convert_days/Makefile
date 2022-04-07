#Usage:		

#make		#compile all binary

#make clean	#remove all binary and objects

.PHONY = all clean

CC = gcc

LINKERFLAG = -lm

SRCS := convert_days.c

BINS := convert_days

all: convert_days

convert_days: convert_days.o
	@echo "Checking...."
	${CC} ${LINKERFLAG} convert_days.o -o convert_days 

convert_days.o: convert_days.c
	@echo "Creating...."
	${CC} -c convert_days.c 

clean:
	@echo "Cleaning up...."
	rm -rvf convert_days.o convert_days 
