#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str[10];
    int cnt = 0;

    for(int i=0;i<10;i++){
        cin >> str[i];
    }

    for(int i=0;i<10;i++){
        int len = str[i].length();
        cnt+=len;
        
    }
    
    cout<<cnt;
    
    return 0;
}