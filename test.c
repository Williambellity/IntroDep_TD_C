#include <stdio.h>

void swap(int* a, int* b);

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 2;
    swap(&a, &b);

    printf("a = %i\n b = %i\n", a, b);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}