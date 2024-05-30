#include <stdio.h>


int main(void){

    unsigned int i = 0;
    printf("i = %u\n", i); 

    unsigned int j = ~0;    //无符号0值按位去翻得到对应类型的无符号最大值
    printf("j = %u\n", j);

    return 0;
}