#include <stdio.h>

// Déclaration de fonction
void sommeTableau(int tab1[], int tab2[], int result[], int lenght);
void print_tableau(int tab[50], int lenght);

int main(void)
{
    int tab1[3] = {3, 4, 5};
    int tab2[3] = {1, 2, 3};
    int result[3];
    // Je viens avec mes sacs, je mets mes sacs dans l'argument de la fonction, sac = result
    sommeTableau(tab1, tab2, result, 3);
    print_tableau(result, 3);
}

// Définition de fonction
void sommeTableau(int tab1[], int tab2[], int result[],int lenght) {
    
    for (int i = 0; i < lenght; i++)
    {
        result[i] = tab1[i] + tab2[i];
    }
    
}

void print_tableau(int tab[50], int lenght) {
    printf("[");
    for (int i = 0; i < lenght - 1; i++) {
        printf("%i, ", tab[i]);
    }
    printf(" %i]\n", tab[lenght - 1]);
}