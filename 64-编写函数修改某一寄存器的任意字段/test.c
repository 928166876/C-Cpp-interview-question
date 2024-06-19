#include <stdio.h>

#define int8_t  unsigned char

void aw_set_symbol(int8_t reg_value, int8_t symbol_value, int8_t symbol_len, int8_t symbol_shift);

int main(void){
    int reg = 0b00000000;
    printf("reg = %ud\n", reg);

    aw_set_symbol(reg, 1, 1, 2);
    return 0;
}

void aw_set_symbol(int8_t reg_value, int8_t symbol_value, int8_t symbol_len, int8_t symbol_shift){
    for(int i = 0; i < symbol_len; i++){
        reg_value &= ~(1 << (symbol_shift + i));
    }

    reg_value |= (symbol_value << symbol_shift);
    printf("after reg = %ud\n", reg_value);
}