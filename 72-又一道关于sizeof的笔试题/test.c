#include <stdio.h>

void func(int array[], int n);

int main(void){
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;
    printf("size of array = %ld\n", sizeof(arr));   // 40字节
    printf("size of pointer = %ld\n", sizeof(p));   // 8字节

    return 0;
}

void func(int array[], int n){
    printf("size of array = %ld\n", sizeof(array)); //输出8 数组在传参时，会退化为指针，所以sizeof(array)输出的是指针的大小
}