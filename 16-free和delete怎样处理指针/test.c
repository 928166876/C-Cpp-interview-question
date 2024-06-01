#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){

    char *p = (char *)malloc(100);
    strcpy(p, "hello world");
    printf("p add = %p\n", p);
    printf("p = %s\n", p);
    free(p);    //释放内存 只是释放掉了malloc申请的内存，但是p指针还是存在的。

    p = NULL;  //释放内存后，建议将指针置为NULL，防止野指针的出现。

    // if(p != NULL){
    //     strcpy(p, "goodbye");   //不会报错 也不会报段错误！
    //     printf("p add = %p\n", p);
    //     printf("p = %s\n", p);
    // }
    return 0;
}