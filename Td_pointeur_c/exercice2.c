#include <stdio.h>
#include <stdlib.h>

void putChaineInCharStarAndModifyFirstChar(char *s, char *copy_s, int lenght, char newChar);
int mylen(char s[]);
int nombreOccurence(char occ, char *s);

int main(void) {
    char *s = "bonjour";
    int lenght = mylen(s);
    char *copy_s = malloc(lenght * sizeof(char));
    putChaineInCharStarAndModifyFirstChar(s, copy_s, lenght, 'L');
    printf("newString : %s\n", copy_s);
}

void putChaineInCharStarAndModifyFirstChar(char *s, char *copy_s, int lenght, char newChar) {
    *copy_s = newChar;
    for (int i = 1; i < lenght; i++)
    {
        *(copy_s + i) = s[i];
    }
}

int mylen(char s[]) {
    int compteur = 0;
    while (s[compteur])
    {
        compteur += 1;
    }
    return compteur;
}