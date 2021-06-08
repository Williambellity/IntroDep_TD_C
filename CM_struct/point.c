#include <stdio.h>
#include <stdlib.h>
#include "point.h"



Point *create_point(int x, int y) {
    Point *p = (Point *) malloc(sizeof(Point));
    p->x = x;
    p->y = y;
    return p;
}

void print_point(Point *p) {
    printf("[%i, %i]\n", p->x, p->y);

}

void move(Point *p, int dx, int dy) {
    p->x = p->x + dx;
    p->y = p->y + dy;
}