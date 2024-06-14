#include <stdio.h>


int main(void){
    int x, y, z;
    int t;
    for(t = 0; t < 4; t++){
        x = 4 * t;
        y = 25 - 7 * t;
        z = 75 + 3 * t;
        printf("cock = %d, hen = %d, chicken = %d\n", x, y, z);
    }

    return 0;
}