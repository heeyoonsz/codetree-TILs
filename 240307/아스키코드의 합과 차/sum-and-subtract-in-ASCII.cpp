#include <iostream>
#include <string>
using namespace std;

int main() {
    
    char str1,str2;
    
    cin >> str1 >> str2;

    int a_num = (int)str1;
    int b_num = (int)str2;

    cout << a_num + b_num<<" ";

    if(a_num>b_num){
        cout << a_num - b_num;
    }
    else
        cout << b_num - a_num ;

    return 0;
}