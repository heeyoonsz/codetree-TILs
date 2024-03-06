#include <iostream>
#include <string>
using namespace std;


int main() {
  
    string str1, str2;
    
    cin>>str1;
    cin>>str2;
    
    int len_a = str1.length();
    int len_b = str2.length();

    while(true){
        
        int idx = -1;

        int candidates = len_a - len_b + 1;
        for(int i=0;i<candidates;i++){
            bool is_same = true;
            for(int j=0;j<len_b;j++){
                if(str1[i+j]!=str2[j]){
                    is_same = false;
                    break;
                }
            }

            if(is_same){
                idx=i;
                break;
            }
            
        }

        if(idx ==-1)
            break;
        
        str1 = str1.substr(0,idx) + str1.substr(idx+len_b);

        len_a = str1.length();

        }


    cout << str1;


    return 0;
}