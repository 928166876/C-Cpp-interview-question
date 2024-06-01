#include <stdio.h>

#define XNAME(n) x##n
#define PRINT_XN(n) printf("x" #n ": %d\n", x##n)

#define TEST(n) printf("n: %d\n", n)

int main(void){

    // int x1 = 10;
    int XNAME(1) = 10;  // x1 --> int x1  = 10;
    PRINT_XN(1); // x1: 10
    TEST(1);    // print("n: %d\n", 1);

    printf("x1: %d\n", x1); // error: use of undeclared identifier 'x1'

    return 0;
}

/*
解释：
在这个例子中，XNAME(1)是x##1，##是连接符，将x和1连接起来，形成x1。
然后，int XNAME(1) = 10;就变成了int x1 = 10;。

#define XNAME(n) xn x与n（1值）是独立的是两个语言符号，##的作用是将x与n粘合为一个语言符号x1。
*/