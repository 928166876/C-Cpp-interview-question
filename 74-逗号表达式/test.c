#include <stdio.h>

int main(void){
    int x=10,y=3,z;
    printf("%d\n",z =(x%y , x/y));  //输出3，考察逗号表达式 逗号表达式的值是最后一个表达式的值
    return 0;
}