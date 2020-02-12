CC=gcc
CFLAGS=-Wall
SRC=pileface.c
OBJ=$(SRC:.c=.o)

pileface : $(OBJ) pileface.h
	$(CC) -o $@ $(OBJ)

%.o : %.c
	$(CC) -c $< $(CFLAGS)

clean :
	rm *.o *~core