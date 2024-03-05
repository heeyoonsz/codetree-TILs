#include <iostream>
#include <string>
using namespace std;



int main() {
    
    string str;

    cin >> str;
    
    int cnt_ee=0;
    int cnt_eb=0;

    for( int i=0; i<str.length()-1; i++){
        if(str[i]=='e' && str[i+1]=='e')
            cnt_ee+=1;
        if(str[i]=='e' && str[i+1]=='b')
            cnt_eb+=1;
    }
    
    cout << cnt_ee << " " <<cnt_eb;

    return 0;
}