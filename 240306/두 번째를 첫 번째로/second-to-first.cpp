#include <iostream>
#include <string>
using namespace std;

int main() {
    

    string str;
    cin >> str;

    char firstChar = str[0];
    char secondChar = str[1];

    for(int i=0;i<str.length();i++){
        if(str[i]==secondChar){
            str[i]=firstChar;
        }
    }

    cout << str; 
    return 0;
}