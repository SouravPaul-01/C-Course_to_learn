#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int data [9] = {0,1,2,3,4,5,6,7,8};
    replace(data,data+9,4,100);
    for (int i = 0; i < 9; i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}