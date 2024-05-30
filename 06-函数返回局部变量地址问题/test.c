#include <stdio.h>

char *get_str(void);
int main(void){
    char *str = get_str();
    printf("p = %p\n", str);  //输出的是一个地址值
    printf("%s\n", str);    //报段错误，因为get_str函数返回的是一个局部变量的地址
    return 0;
}

char *get_str(void){
    char str[] = {"hello world"};   //局部变量，函数执行完毕后会被释放，hello world字符串存放在栈上，函数执行完毕后栈上的数据会被释放
    return str; 
}