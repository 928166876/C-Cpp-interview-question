#include <iostream>

using namespace std;
class Myclass{
    public:
        Myclass() {cout << "Constructor called!" << endl;}
};

int main(void){

    Myclass a[4], *p[5];

    return 0;
}


/*
解释：构造函数在对象创建时被调用，所以会打印4次“Constructor called!”。

Myclass a[4], *p[5];可以分解为：
Myclass a[4];   //创建4个对象
Myclass *p[5];  //创建5个指针,并没有创建对象。 类比：int *p[5], 只是创建了5个int指针，没有创建int对象。
*/