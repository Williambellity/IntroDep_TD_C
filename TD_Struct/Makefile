all: main

date.o: date.c date.h
	gcc -c date.c

person.o: person.c person.h date.o
	gcc -c person.c

list.o: list.c list.h date.o
	gcc -c list.c

main.o: main.c
	gcc -c main.c

main: main.o date.o person.o list.o
	gcc -o main main.o date.o person.o list.o
