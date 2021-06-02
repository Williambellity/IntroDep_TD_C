#include <stdio.h>

int main(void){
    int number = 5; // 0000 0101
    
    int res = 0;
    for (int i = 0; i < 8*sizeof(int); i++) {
        if (number & (1 << i)) {
            res += 1;
        }
    }
    printf("res: %i\n", res);
}
