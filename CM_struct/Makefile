all: main

triangle.o: triangle.c triangle.h point.h
	gcc -c triangle.c

point.o: point.c point.h
	gcc -c point.c

main.o: main.c
	gcc -c main.c

main: main.o triangle.o point.o
	gcc -o main main.o triangle.o point.o


