#include <stdio.h>

#define IS_POWER_OF_TWO(n) ((n) & ((n) - 1) == 0)

int main(void){
    int n;
    printf("Please input a number: ");
    scanf("%d", &n);
    if(IS_POWER_OF_TWO(n)){
        printf("%d is power of 2.\n", n);
    }else{
        printf("%d is not power of 2.\n", n);
    }

    return 0;
}