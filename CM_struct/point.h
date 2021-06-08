#ifndef POINT
#define POINT


typedef struct _POINT {
    int x;
    int y;
} Point;

void print_point(Point *p);
Point *create_point(int x, int y);
void move(Point *p, int dx, int dy);

#endif