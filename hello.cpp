#include<iostream>
#include<vector>
using namespace std;
#define MAX 100
int main(){
    vector<int> arr (MAX);
    cout<<"Enter the number of elements: ";
    int count = 0,sum =0;
    cin>>count;
    for (int  i = 1; i < count; i++)
    {
        arr[i] = i ;
        sum += arr[i];
    }
    cout<< "sum is :" <<sum<<endl;


    
    return 0;
}