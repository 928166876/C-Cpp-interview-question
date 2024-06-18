#include <stdio.h>

struct A{
    double a;
    char b;
    int c;
};

struct B{
    char d;
    struct A e;
    double f;
};

int main(void){
    printf("size of struct A = %ld\n", sizeof(struct A));
    printf("size of struct B = %ld\n", sizeof(struct B));

    return 0;
}