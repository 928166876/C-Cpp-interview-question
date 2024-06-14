#include <stdio.h>

int ascii_to_integer(const char *str);

int main(int argc, char **argv){

    printf("value = %d\n", ascii_to_integer(argv[1]));

    return 0;
}

int ascii_to_integer(const char *str){
    int val = 0;
    while(*str >= '0' && *str <= '9'){
        val *= 10;
        val += *str - '0';
        str++;
    }
    if(*str != '\0'){
        return 0;
    }
    return val;
}