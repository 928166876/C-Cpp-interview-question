//举例说明，通过#运算符，利用宏参数创建字符串
#include <stdio.h>

#define SQUARE(x) printf("The square of " #x " is %d.\n", ((x)*(x)))


int main(void){

    SQUARE(2 + 4);

    return 0;
}

/*
解释：#x是字符串化操作符，将x转换为字符串，然后与其他字符串连接起来。
在这个例子中，x是2+4，所以#x是"2+4"，然后与"The square of "和" is %d.\n"连接起来，最后形成"The square of 2+4 is %d.\n"。
然后，((x)*(x))是(2+4)*(2+4)，即6*6，输出"The square of 2+4 is 36."。
*/