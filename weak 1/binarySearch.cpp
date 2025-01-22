#include <iostream>
#include <algorithm>
using namespace std;
 
 int main(){
int arr[9]={0,1,2,3,4,5,6,7,8};
int key =5;

if(binary_search(arr,arr+9,key)) cout<<"found "<<key<<endl;
else cout<<"not found"<<endl;

    return 0;
 }