#include <iostream>

using namespace std;

int main(void){

    int a = 10;

    // auto sum = [a](int b){cout << a + b << endl;}; //[]捕获参数列表， （）传递参数列表， {}函数体语句
    // auto sum = [=](int b){cout << a + b << endl;};      //按值传递局部变量a 与全局变量a值相等，但地址不一样
    auto sum = [&](int b){cout << a + b << endl;};      //引用传递
    sum(20);        

    return 0;
}