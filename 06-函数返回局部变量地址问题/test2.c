#include <stdio.h>

char *get_str(void);
int main(void){
    char *str = get_str();
    printf("p = %p\n", str);  //输出的是一个地址值
    printf("%s\n", str);      //输出 hello world
    return 0;
}

char *get_str(void){
    char *str = "hello world";  //这里的str是一个局部变量，会随着函数的结束而销毁,但是hello world是一个常量字符串，存储在常量区，不会随着函数的结束而销毁
    return str; 
}