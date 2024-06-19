#include <iostream>

using namespace std;

class A{
    public:
        A(){cout << "construct function" << endl;}
        A(int i){cout << "construct function with parameter" << endl;}
};

int main(void){
    A a;
    A b(3);
    A *pt = new A;

    return 0;
}