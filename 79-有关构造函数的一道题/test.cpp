#include <iostream>
#include <cstring>

using namespace std;

class Name{
    char name[20];
public:
    Name(){
        strcpy(name, "");
        cout << '?';
    }
    Name(const char *s){
        strcpy(name, s);
        cout << '?';
    }
};

int main(void){
    Name names[3] = {Name("Rick"), Name("Maggie")};
    return 0;
}