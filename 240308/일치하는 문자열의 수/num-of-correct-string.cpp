#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string str1, str2;
    int num;

    cin >> num ;
    cin >> str1;

    int cnt = 0;

    for(int i=0;i<num;i++){
        cin>>str2;

        if(str1 == str2)
            cnt++;
    }

    cout << cnt;

    return 0;
}