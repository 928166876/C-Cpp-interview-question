#include <stdio.h>

int add(const int *ptr1, const int *ptr2){
    *ptr1 += 10;    //不能修改指向的值
    *ptr2 += 10;    //error: assignment of read-only location ‘* ptr2’
    return *ptr1 + *ptr2;
}

int main(void){

    int i = 10;
    int j = 100;
    int sum;

    sum = add(&i, &j);
    printf("sum = %d\n", sum);

    return 0;
}