#include <iostream>

using namespace std;

int main(void){
    double a = 1.0;
    cout << (int &)a << endl;

    // double a = 3.14;
    // const int &b = a;
    // cout << &a << endl;
    // cout << &b << endl;      
    return 0;
}