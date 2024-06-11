#include <stdio.h>


int func(int x){
    int countx = 0;
    while(x){
        countx++;
        x = x&(x-1);
    }
    return countx;
}

int main(void){
    int x = 0x12345678;
    int countx = func(x);
    printf("countx = %d\n", countx);
    return 0;
}



