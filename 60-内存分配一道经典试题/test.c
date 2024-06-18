#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void GetMemory(char *p){
    p = (char *)malloc(100);
}

int main(void){
    char *str = NULL;
    GetMemory(str);
    strcpy(str, "hello world");
    printf("%s\n", str);

    return 0;
}