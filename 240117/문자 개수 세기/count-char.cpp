#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string str;
    getline(cin,str);
    
    char a;
    cin>>a;


    int cnt = 0;

    for(int i=0;i<str.length();i++){
        if(str[i]==a)
            cnt+=1;
    }
    cout<<cnt;
    
    return 0;
}