#include "point.h"

#ifndef TRIANGLE
#define TRIANGLE


typedef struct _Triangle {
    Point *s1;
    Point *s2;
    Point *s3;
} Triangle;


Triangle *create_triangle(Point *s1,Point *s2,Point *s3);
void print_triangle(Triangle *p);


#endif