#include <iostream>
#include <string>
using namespace std;

int main() {
    // 문자열을 구현합니다.
	string str;
	
	// 문자열을 입력받습니다.
	cin >> str;
	
	// 문자열의 길이를 구합니다.
	int len = str.length();
	
	// 문자가 하나 남을 때까지 반복합니다.
	while(len > 1) {
		// 정수를 입력받습니다.
		int a;
		scanf("%d", &a);
		
		// 정수가 문자열의 길이 이상이면 마지막 문자를 가리키게 변경합니다.
		if(a >= len)
			a = len - 1;
		
		// a번 자리의 원소를 제거합니다.
		str.erase(a, 1);
		len--;
		
		// 현재 문자열을 출력합니다.
		cout << str << endl;
	}
	
    return 0;
}