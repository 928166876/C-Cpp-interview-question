#include <stdio.h>
#include <stdlib.h>


int main(void){

    FILE *fp;
    fp = fopen("test.txt", "r");
    if(fp == NULL){
        printf("open file failed\n");
        exit(1);
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    printf("size of file = %ld\n", size);
    fclose(fp);

    return 0;
    
}