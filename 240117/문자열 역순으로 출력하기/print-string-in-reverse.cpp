#include <iostream>
#include <string>
using namespace std;

int main() {

    int n=4;
    string arr[4];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   for (int i = 0 ; i < 4 ; i ++){
        cout << arr[3-i] << endl ;
    }

    return 0;
}