SHELL = /bin/sh
CC = g++
LIBS  = 
CFLAGS +=  -Wall -Wextra
CFLAGS += -I. -I../../

OBJS =  main.o ../../Linux_GFX.o

Bufex:${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o $@  ${LIBS}
	
clean:
	rm -rf *.o src/*.o Bufex

R:clean
R:CFLAGS +=-O3
R:Bufex


Rd:clean
Rd:CFLAGS += -DDebug -g -O0
Rd:Bufex

# DO NOT DELETE
