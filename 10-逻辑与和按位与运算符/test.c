#include <stdio.h>

#define ARRSIZE 10

int main(void){

    int i = 0;  
    char arr[ARRSIZE] = "ABCDEFGHIJ";  //初始化数组A的所有元素为0
    // while(i < ARRSIZE && arr[i] != 'E')
    //     i++;
    while(i < ARRSIZE & arr[i] != 'E') //逻辑与运算符，不会短路，会继续判断右边的条件
        i++;

    printf("i = %d\n", i); 
    return 0;
}