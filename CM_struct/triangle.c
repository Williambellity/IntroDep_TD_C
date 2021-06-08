#include "triangle.h"
#include <stdlib.h>
#include <stdio.h>

Triangle *create_triangle(Point *s1,Point *s2,Point *s3) {
    Triangle *res = malloc(sizeof(Triangle));

    res->s1 = s1;
    res->s2 = s2;
    res->s3 = s3;

    return res;
}

void print_triangle(Triangle *t) {
    printf("{");
    print_point(t->s1);
    print_point(t->s2);
    print_point(t->s3);
    printf("}\n");
}