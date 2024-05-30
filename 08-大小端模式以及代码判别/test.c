#include <stdio.h>


int main(void){

    union test{
        unsigned int n;
        char ch[4];
    };

    union test t;
    t.n = 0x12345678;

    for(int i = 0; i < 4; i++){
        printf("&ch[%d] = %p: &ch[%d] = %x\n", i, &t.ch[i], i, t.ch[i]);
    }

    return 0;
}