#include <stdio.h>
#include <stdlib.h>

void putChaineInCharStar(char s[], char *ps, int lenght);
int mylen(char s[]);
int nombreOccurence(char occ, char *s);

int main(void) {
    char s[] = "Bonjour";
    int lenght = mylen(s);
    char *ps = malloc((lenght+1) * sizeof(char));
    putChaineInCharStar(s, ps, lenght);
    printf("ps = %s\n", ps);
    printf("Nombre d'occurence de o dans %s: %i\n", s, nombreOccurence('o', s));
}

void putChaineInCharStar(char s[], char *ps, int lenght) {
    for (int i = 0; i <= lenght; i++) {
        *(ps + i) = s[i];
    }
    

}

int nombreOccurence(char occ, char* s) {
    int lenght = mylen(s);
    int compteur = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (s[i] == occ) {
            compteur++;
        }
    }
    return compteur;
}

int mylen(char s[]) {
    int compteur = 0;
    while (s[compteur])
    {
        compteur += 1;
    }
    return compteur;
}