#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *p1= "ABCABC";
    char *p2=(char *)malloc(strlen(p1));    
    strcpy(p2, p1);
    printf("%s\n", p2);
    return 0;
}