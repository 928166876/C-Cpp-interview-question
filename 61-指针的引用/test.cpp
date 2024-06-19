/*
根据上一节的问题，如果我们想在函数内改变原来指针的值，我们需要传递指针的地址，形参则需要
定义为指向指针的指针。

参考传递int类型参数的格式：
void function(int *p){
    *p = 100
}
int main(){
    int a = 10;
    function(&a);
    printf("%d\n", a);
    return 0;
}


同样我们可以可以传递，引用
void function(int &p){
    p = 100
}
这样改写上节课的代码
注意指针的引用：int* &p
*/


#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void GetMemory(char* &p){
    p = (char *)malloc(100);
}

int main(void){
    char *str = NULL;
    GetMemory(str);
    strcpy(str, "hello world");
    cout << str << endl;

    return 0;
}