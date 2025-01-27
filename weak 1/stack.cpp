#include<iostream>
#include<cstring>
#include <stack>    // implement stack library
using namespace std;

int main (){
    // Take a array of characters
    char str [10] ="ABCD"; 

    stack<char>s;   // creating stack object

    for (int i=0;i<strlen(str);i++){
        s.push(str[i]);
    }
    cout <<"Reversed string is : "<<endl;

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}