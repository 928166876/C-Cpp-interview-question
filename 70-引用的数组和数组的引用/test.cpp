#include <iostream>

using namespace std;


int main(void){
    int a = 10, b = 20, c = 30;
    int &ra = a;
    int &rb = b;
    int &rc = c;

    // int &arr[3] = {ra, rb, rc}; //引用的数组是不存在的
    int num[3] = {10, 20, 30};
    int (&arr)[3] = num;    //数组的引用
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}