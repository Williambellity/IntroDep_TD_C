#include <stdio.h>

int mylen(char s[]);
int isPalindrome(char s[], int n);

int main(void){
    char s1[] = "kayak";
    char s2[] = "jesuispasunpalindrome";
    printf("kayak est un palindrome ? %i\n", isPalindrome(s1, mylen(s1)));
    printf("jesuispasunpalindrome est un palindrome ? %i\n", isPalindrome(s2, mylen(s2)));
}

int isPalindrome(char s[], int n) {
    
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n-1-i]){
            return 0;
        }
        return 1;
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
