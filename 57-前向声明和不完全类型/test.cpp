#include <iostream>

// class Y;    //类的不完全声明
// class X{
//     Y y;    //不能创建不完全声明类的对象
// };

// class Y{
//     X *x;
// };
class X;    //类的不完全声明
class Y{
    X *x;   //可以创建不完全声明类的指针
};

class X{
    Y y;
};


int main(void){

    return 0;
}