OBJS=string.o
CC=gcc
CFLAGS=-c
minilibc: $(OBJS)
	ar rcs libminic.a $(OBJS) 
	ranlib libminic.a
	cp libminic.a tests

string.o: string.c string.h
	$(CC) $(CFLAGS) string.c

tests: minilibc
	make -f tests/Makefile
	