#include <stdio.h>

int main(void){
    unsigned int a = 6;
    int b = -20;

    (a + b > 6) ? puts("> 6") : puts("<= 6");   //输出结果是 “> 6”！！！！
    printf("a + b = %d\n", a + b);  //输出结果是 “-14”
    printf("a + b = %u\n", a + b);  //输出结果是 “4294967282”

    return 0;
}


/*
解释：
6 原码
0000 0000 0000 0000 0000 0000 0000 0110

-20 原码
1000 0000 0000 0000 0000 0000 0001 0100
反码  
1111 1111 1111 1111 1111 1111 1110 1011
补码
1111 1111 1111 1111 1111 1111 1110 1100


6 + (-20) = -14
补码
1111 1111 1111 1111 1111 1111 1111 0010
有符号输出
1111 1111 1111 1111 1111 1111 1111 0010 //这个是-14的原码
无符号输出
1111 1111 1111 1111 1111 1111 1111 0010 //值4294967282

总结：
1、有符号数和无符号数进行运算时，会先将有符号数转换为无符号数，然后再进行运算
2、printf函数中的格式化输出符号，只是对输出的数据进行格式化，不会改变数据本身的存储方式
3、%d 输出有符号数，%u 输出无符号数
*/