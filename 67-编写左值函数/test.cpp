#include <iostream>

using namespace std;

//左值函数
// int &Max_value(int &a, int &b){
//     return a > b ? a : b;
// }

//右值函数
int Max_value(int a, int b){
    return a > b ? a : b;
}

int main(void){
    int x = 10, y = 20;
    int w;
    // Max_value(x, y) += 10;
    w = Max_value(x, y);
    cout << "w = " << w << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}