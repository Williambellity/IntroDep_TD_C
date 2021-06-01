#include <stdio.h>

int main(void){
    
    int fibonnacci(int n)
    {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        int f0 = 0;
        int f1 = 1;
        for (int i = 2; i < n + 1; i++) {
            int temp = f1;
            f1 = f0 + f1;
            f0 = temp;
        }
        return f1;
    }

    int n = fibonnacci(7);
    printf("fibbo(3) = %i\n", n);
}


