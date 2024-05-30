#include <stdio.h>

int main(void){
    int i = 43;
    printf("%d\n", printf("%d", printf("%d", i)));

    return 0;
}

//输出结果是：43 2 1
//解释：printf("%d", i)输出43，返回值是2，printf("%d", 2)输出2，返回值是1，printf("%d", 1)输出1，返回值是1，所以输出结果是：43 2 1
//注意：printf是行缓冲模式，遇到'\n'才刷新缓冲区