#include <stdio.h>
#include <string.h>

#define SIZE    80

struct std{
    unsigned int id;
    // char *name;             //如果想有效保存数据不建议使用指针 
    char name[SIZE];
    unsigned int age;
}per;

int main(void){

    per.id = 0001;
    strcpy(per.name, "Micheal Jackson");    //编译正常，运行时报段错误。

    // per.name = "Micheal Jackson";   //正常运行，并输出显示。！！！但是！！！，这样数据只会在常量存储区保存一份
    per.age = 20;
    printf("%s\n", per.name);
    return 0;
}

/*
解释：
1、strcpy是将字符串内容拷贝到另外一段内存空间，不能拿char * 来接收，必须是一段地址的起始位置才可以，所以报错段错误。
2、结构体中char *没有初始化指定位置，是个野指针，可能存在读写权限的问题。（即使空间地址够大，但是不允许写）一样会出错。
*/