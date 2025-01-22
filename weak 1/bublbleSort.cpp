#include <iostream>
#include <algorithm>
using namespace std;


bool sorting (int i , int j){ return i>j;}
int main()
{
    int arr[9] = {5, 4, 3,6,8,9,7, 2, 1};
    sort(arr, arr + 9,sorting);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
