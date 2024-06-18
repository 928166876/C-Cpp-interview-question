#include <iostream>
#include <string>

using namespace std;

void bar(const string &s){
    cout << s << endl;
}

int main(void){

    bar("hello world");

    return 0;
}