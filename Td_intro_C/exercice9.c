#include <stdio.h>

#define TRUE 1
#define FALSE 0

int mylen(char *s);
int eq_str(char *s1, char *s2);

int main(void) {
    char s1[] = "test";
    char s2[] = "test";
    int result = eq_str(s1, s2);
    if (result == 1){
        printf("True\n");
    }
    if (result == 0){
        printf("False\n");
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

int eq_str(char* s1,char* s2){
    int lens1 = mylen(s1);
    int lens2 = mylen(s2);
    if (lens1 != lens2) {
        return 0;
    }
    int i = 0;
    while (i < lens1) {
        i++;
        if (s1[i] != s2[i])
        {
            return 0;
        }
    }
    return 1;
}