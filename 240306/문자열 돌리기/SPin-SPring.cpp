#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string str;
    cin >> str;

    //문자열의 길이
    int l; 

    int len = str.length();

    cout << str<<endl;

    for(int i=0;i<len;i++){
        str = str.substr(len-1,1)+str.substr(0,4);
        cout << str << endl;
    }

    return 0;
}