#include <iostream>

using namespace std;

void max_out(int a, int b){
    cout << ((a > b) ? a : b);  // << 的运算符优先级高于 ?:，所以(a > b) 会优先与cout结合 cout << (a > b) ? a : b; 相当于 cout << (a > b); cout << a : b;
}

int main(void){
    int i = 10, j = 20;
    cout << "The larger of " << i << " and " << j << " is ";
    max_out(i, j);
    cout << endl;
    return 0;
}