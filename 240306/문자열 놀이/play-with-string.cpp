#include <iostream>
#include <string>
using namespace std;


int main() {
    

    string s;
    int q=0;

    cin >> s;
    cin >> q;

    int len = s.length();

    for(int i=0;i<q;i++){
        int q_type;
        cin >> q_type;

        if(q_type==1){
            int a,b;
            cin >> a >> b;

            char tmp = s[b-1];
            s[b-1] = s[a-1];
            s[a-1] = tmp;

            cout << s << endl;

        }
        else {
            char a,b;
            cin >> a >>b;

            for(int j=0;j<len;j++)
                if(s[j]==a)
                    s[j] = b;
            cout << s << endl;
            }
        }
    return 0;
}