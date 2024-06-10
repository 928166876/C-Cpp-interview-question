
#pragma pack(2) // 2 bytes alignment 修改代码的对齐方式，默认64位操作系统8字节对齐，32位操作系统4字节对齐
#include <stdio.h>

#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)

typedef struct s{

    union{
        int a;
        char str[10];
    };
    struct s *next;
}S;

int main(){

    printf("%ld\n", offsetof(S, next));
    return 0; 
}