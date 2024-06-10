#include <stdio.h>

#define b   10
int main(void){
    const int a = 10;   
    int c = 20;
    // a = 10; // error: assignment of read-only variable ‘a’
    // int *pt = &a;
    // *pt = 20;   //指针验证
    // char arr[a] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //数组验证
    // char arr[b] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //数组验证

    // const int *pt = &a;
    // // int const *pt = &a;
    // pt = &c;    //可以指向其他变量
    // *pt = 100;  //不能修改指向的值

    int * const pt = &a;
    *pt = 100;  //可以修改指向的值
    pt = &c;    //不能指向其他变量

    printf("a = %d\n", a);
    printf("pt = %d\n", *pt);

    return 0;
}