#include <stdio.h>

struct A{
    char a;
    char b;
    int c;
};

struct B{
    char a;
    int c;
    char b;
};

int main(void){
    printf("size of struct A = %ld\n", sizeof(struct A));
    printf("size of struct B = %ld\n", sizeof(struct B));

    return 0;
}