#include <stdio.h>
#include <stdlib.h>

int *create_list(void);
int len(int *list)

int main(void) {

}

int *create_list(void) {
    int *p = (int*) malloc(sizeof(int));
    *p = 0;
    return p;
}

int len(int *list) {
    int len = *list;
    return len;
}

// Use realloc or malloc+free

void print_tableau(int *list) {
    printf("[");
    int lenght = len(list);
    for (int i = 0; i < lenght - 1; i++)
    {
        printf("%i, ", list[i]);
    }
    printf(" %i]\n", list[lenght - 1]);
}

int *append(int *list, int element) {

}

