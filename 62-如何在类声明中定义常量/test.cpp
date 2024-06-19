#include <iostream>

using namespace std;

class A{
    private:
        enum{size = 10};
        // static const int size = 10;
        int arr[size];
    public:
        // A(const int b = 10){}
        // A():size(10){}
        void show(){
            cout << size << endl;
        }
        // int arr[size];
};


int main(void){
    // A a;
    // A b;
    // a.show();
    return 0;
}