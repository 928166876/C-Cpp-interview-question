#include <iostream>

using namespace std;


int main(void){
    const char *ptr = "hello world";
    cout << ptr << endl;    //输出字符串
    cout << (void *)ptr << endl;    //输出地址

    int a = 10;
    int *p = &a;
    cout << p << endl;  //输出地址
    return 0;
}