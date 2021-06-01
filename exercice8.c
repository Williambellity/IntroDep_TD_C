#include <stdio.h>

int mylen(char *s);

int main(void) {
    char s[] = "hello";
    int len = mylen(s);
    printf("%i\n", len);
}

int mylen(char* s) {
    int compteur = 0;
    while (s[compteur] != '\0')
    {
        compteur += 1;
    }
    return compteur;
}