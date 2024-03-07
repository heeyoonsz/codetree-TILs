#include <iostream>
#include <string>
using namespace std;

int main() {

    char alpha;

    cin >> alpha;
    // char x;

  //  cout << (char)((int)alpha+1);

    if (alpha == 'z')
        cout << "a";
    else
        cout << (char)(alpha+1);

    return 0;
}