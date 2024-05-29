#include <stdio.h>


int main(void){

    char *s = "AAA";
    printf("%s\n", s);   //正常答应 AAA


    // s[0] = 'B';          //修改常量字符串的内容
    // printf("%s\n", s);  //报Segmentation fault

    s = "BBB";          //修改指针指向
    printf("%s\n", s);  //正常打印 BBB

    return 0;
}