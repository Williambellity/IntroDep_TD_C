#include <stdio.h>

void print_tableau(int tab[50], int lenght);

int main(void) {
    int tab[50];
    int index = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0) {
            
            tab[index] = i;
            index++;
        }
    }
    print_tableau(tab, 50);
}

void print_tableau(int tab[50], int lenght) {
    printf("[");
    for (int i = 0; i < lenght - 1; i++) {
        printf("%i, ", tab[i]);
    }
    printf(" %i]\n", tab[lenght - 1]);
}
