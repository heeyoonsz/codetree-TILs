#include <iostream>
#include <string>
// #define MAX(a>b)?a:b;
#include <algorithm>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    
    string a,b;
    cin>>a>>b;

    if(a.length()<b.length()){
        cout<<b<<" "<<b.length();
    }
    else if(a.length()>b.length()){
        cout<<a<<" "<<a.length();
    }
    else{
        cout<<"same";
    }
    
    return 0;
}