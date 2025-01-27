#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[9] = {0,1,2,3,4,5,6,7,8};
    rotate(arr,arr+3,arr+9);
    for (int i = 0; i < 9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}