#include <iostream>
#include <vector>

using namespace std;

int main(void){
    //1)
    vector<int> list1 = {1, 2, 3, 4, 5, 6};
    vector<int> list_1{1, 2, 3, 4, 5, 6};

    //2)
    vector<int> list2;

    //3)
    vector<int> list3 = list1;

    //4)
    vector<int> list4(list1.begin() + 2, list1.end() - 1);

    //5)
    vector<int> list5(10);

    //6)
    vector<int> list6(10, 3);
    return 0;
}