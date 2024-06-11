#include <stdio.h>

int main(void){
    int i;
    i = 10;
    printf("%d\n", i);
    printf("%ld\n", sizeof(i++));
    printf("%d\n", i);
    return 0;
}