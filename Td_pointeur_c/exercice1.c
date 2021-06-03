#include <stdio.h>
#include <stdlib.h>

int putChaineInCharStar(char s[], char *ps, int lenght);
int mylen(char s[]);

int main(void) {
    char s[] = "Bonjour";
    int lenght = mylen(s);
    char *ps = malloc(lenght * sizeof(char));
    putChaineInCharStar(s, ps, lenght);
    printf("ps = %s", ps);
}

int putChaineInCharStar(char s[], char *ps, int lenght) {
    for (int i = 0; i < lenght; i++) {
        *(ps + i) = s[i];
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