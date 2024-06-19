#include <iostream>

using namespace std;

void max_out(int val1, int val2){
    cout << (val1 > val2) ? val1 : val2;
}

int main(void){

    int x = 20, y = 10;
    cout << "The larger of " << x << " and " << y << " is ";
    max_out(x, y);
    cout << endl;
}

/*
解释： << 的优先级要高于 ?:
所以会先cout 输出 （val1 > val2）的值。
*/