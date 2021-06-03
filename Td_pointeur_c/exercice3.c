#include <stdio.h>
#include <stdlib.h>

void print_tableau(int *tab, int lenght);

int main(void){

}

void print_tableau(int *tab, int lenght) {
    printf("[");
    for (int i = 0; i < lenght - 1; i++) {
        printf("%i, ", tab[i]);
    }
    printf(" %i]\n", tab[lenght - 1]);
}