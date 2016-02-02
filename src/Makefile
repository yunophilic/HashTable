# Created by Ivan Jonathan Hoo
# Copyright (c) 2015 Ivan Jonathan Hoo. All rights reserved.

OBJS = test.o HashTable.o LinkedList.o
CC = g++
DEBUG = -g
CFLAGS = -c $(DEBUG)
LFLAGS = $(DEBUG)

all: test
	./test

test: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o test

test.o: test.cpp HashTable.h
	$(CC) $(CFLAGS) test.cpp

HashTable.o: HashTable.cpp HashTable.h LinkedList.h
	$(CC) $(CFLAGS) HashTable.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	$(CC) $(CFLAGS) LinkedList.cpp

clean:
	rm -f *.o *~ test
