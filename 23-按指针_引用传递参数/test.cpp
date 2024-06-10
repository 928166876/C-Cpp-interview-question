#include <stdio.h>

void change(int *a, int &b, int c){
    c = *a;
    b = 30;
    *a = 20;
}

int main(){

    int a = 10, b = 20, c = 30;
    change(&a, b, c);
    printf("%d %d %d\n", a, b, c);

    return 0;
}

/*
输出结果是：20 30 30
*/