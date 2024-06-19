#include <iostream>
#include <stdlib.h>

using namespace std;

void swap(int *p1, int *p2){
    int *p = (int *)malloc(sizeof(int));
    *p = *p1;
    *p1 = *p2;
    *p2 = *p;
}

int main(void){
    int a = 10, b = 20;
    cout << "a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}