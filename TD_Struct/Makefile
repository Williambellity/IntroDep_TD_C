all: main

main.o: main.c
	gcc -c main.c

point.o: date.c date.h
	gcc -c date.c



main: main.o date.o
	gcc -o main main.o date.o
