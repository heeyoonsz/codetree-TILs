#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;

    int q_num;

    cin >> str>> q_num;

    int q_type;
    for(int i=0;i<q_num;i++){
        
        cin >> q_type;
        
        // 앞으로 밀기
        if(q_type==1){
            /*
            가장 앞 문자 저장
            앞부터 순회해 하나씩 앞으로 당김
            제일 뒤에 저장한 앞 문자 넣기
            */

            // 첫번째문자
            char front = str[0];

            for(int i=1;i<str.length();i++){
                str[i-1] = str[i]; 
            }
            
            // front를 마지막 문자로
            str[str.length()-1] = front;
            cout << str << endl;
        
        }
        
        // 뒤로 밀기
        else if(q_type==2){
            char back = str[str.length()-1];
            // for(int i=1;i<str.length();i++){
                for(int i = str.length()-1; i>=1;i--){
                str[i]=str[i-1];
            }
            str[0] = back;
            cout << str << endl;
        }

        // 앞부터 돌면서 좌우 대칭 위치에 있는 문자 swap
        // 문자열의 중간만 순회
        else if(q_type==3){
            char temp;
            for(int i=0;i<str.length()/2;i++) {
                temp = str[i];
                str[i] = str[str.length()-i-1];
                str[str.length()-i-1] = temp;
            }
            cout << str << endl;

        }
    }
    return 0;
}