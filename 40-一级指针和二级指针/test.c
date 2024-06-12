#include <stdio.h>


int main(void){

    char *str[4] = {"ABCD","EFGH","IJKL","MNOP"};
    char **pt;

    pt = str;
    
    printf("%s\n", *pt);
    return 0;
}