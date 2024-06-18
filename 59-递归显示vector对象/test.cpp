#include <iostream>
#include <vector>

using namespace std;

void show(const vector<int>& arr, int index){
    if(!arr.empty() && index < arr.size()){
        cout << arr[index] << endl;
        show(arr, index + 1);
    }
}


int main(void){
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    show(v, 0);

    return 0;
}