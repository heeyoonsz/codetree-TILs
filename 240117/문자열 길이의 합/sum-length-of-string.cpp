#include <iostream>
#include <string>
using namespace std;

int main() {

    int a;
    cin>>a;

    string str[10];

    
    for(int i=0;i<a;i++){
        // getline(cin,str[i]);
        cin>>str[i];
    }

    int len_all = 0;
    int cnt=0;

    for(int i=0;i<a;i++){
        len_all +=str[i].length();
        if(str[i][0]=='a')
            cnt+=1;
    }

    cout << len_all <<" "<<cnt;

    return 0;
}