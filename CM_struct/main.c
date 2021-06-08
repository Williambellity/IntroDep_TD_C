#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "triangle.h"


int main() {
    Point *p = create_point(5,12);
    print_point(p);
    move(p, 1, 0);
    print_point(p);

    Triangle *t = create_triangle(create_point(5,12),create_point(6,13),create_point(4,11));

    print_triangle(t);

}

