#include <stdio.h>


int main(void){

    int a[5] = {1, 2, 3, 4, 5};
    // printf("a = %p\n", a);
    // printf("&a = %p\n", &a);
    // printf("%p, %p\n", a + 1, &a + 1);
    int *p = (int *)(&a+1);
    printf("%d,%d\n",*(a+1),*(p-1));
    return 0;
}