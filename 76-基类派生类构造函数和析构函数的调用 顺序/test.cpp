#include <iostream>

using namespace std;

class BASE{
    char c;
    public:
        BASE(char n):c(n){

        }

        virtual ~BASE(){
            cout << c;
        }
};

class DERIVED:public BASE{
    char c;
    public:
        DERIVED(char n):BASE(n+1),c(n){

        }

        ~DERIVED(){
            cout << c;
        }
};

int main(){
    DERIVED('X');
    return 0;
}