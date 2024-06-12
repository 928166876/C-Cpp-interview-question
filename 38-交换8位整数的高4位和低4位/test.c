#include <stdio.h>

void convert(unsigned int *pt);

int main(void){

    unsigned int num;
    printf("Please input a number: ");
    scanf("%x", &num);
    convert(&num);
    printf("The number after convert is: 0x%x\n", num);
    return 0;
}

void convert(unsigned int *pt){
    unsigned int tmp;
    tmp = *pt & 0x0f;
    *pt &= 0xf0;
    *pt = (tmp << 4) | (*pt >> 4);
}