#include <stdio.h>

int mylen(char *s);

int main(void) {
    char s1[] = "test";
    char s2[] = "testbis";
    

}

int mylen(char* s) {
    int compteur = 0;
    while (s[compteur] != '\0')
    {
        compteur += 1;
    }
    return compteur;
}

int eq_str(char* s1,char* s2){
    int lens1 = mylen(s1);
    int lens2 = mylen(s2);
    if (lens1 != lens2) {
        return 0
    }
    int i = 0;
    while (i < lens1) {
        if(s1[i] != s2[i]) {
            return 0;
        }
    }
    return 1
}