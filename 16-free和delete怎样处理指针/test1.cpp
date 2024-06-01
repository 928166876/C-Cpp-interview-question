#include <iostream>
#include <string.h>


using namespace std;

int main(void){

    char *p = new char[100];
    strcpy(p, "hello world");
    cout << "p add = " << (void *)p << endl;
    cout << "p = " << p << endl;
    delete [] p;    //释放内存 只是释放掉了new申请的内存，但是p指针还是存在的。

    p = NULL;   //释放内存后，建议将指针置为NULL，防止野指针的出现。

    // if(p != 0){
    //     strcpy(p, "goodbye");   //不会报错 也不会报段错误！ 但是强烈不建议这样使用！！！
    //     cout << "p add = " << (void *)p << endl;
    //     cout << "p = " << p << endl;
    // }
    return 0;
}

/*
// if(p != 0){
//     strcpy(p, "goodbye");   //不会报错 也不会报段错误！ 但是强烈不建议这样使用！！！
//     cout << "p add = " << (void *)p << endl;
//     cout << "p = " << p << endl;
// }
加上面语句后，
运行输出：
p add = 0xbd7c20
p = hello world
p add = 0xbd7c20
p = goodbye
*/