/*******************************************************************************************
 *         
 *
 *	진법 변환2
 *
 *
 *	10진법 수 N을 B진법으로 바꿔 출력하는 프로그램
 *	10진법을 넘어가는 진법은 숫자로 표시할 수 없는 경우에는 알파벳 대문자를 사용
 *	(A: 10, B: 11, ..., F: 16, ..., Y: 34, Z: 35)
 *
 *	(예제 입력) 60466175 36
 *	(예제 출력) ZZZZZ
 *
 *	#참고#
 *	아스키 코드 : 0=NULL / 1=SOH / ... / 49=1 / 50=2 / ... / 65=A / 66=B / ...
 *		      97=a / 98=b / ...
 *
 *
 * *****************************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main () {
	int N, B, rest, portion;
	vector <int> transformed;

	cin >> N >> B;

	portion = N;
	while(portion != 0) {
		rest = portion % B;
		portion = portion / B;
		transformed.push_back(rest);
	}

	int len = transformed.size();
	for (int i=0; i<len; i++){
		int tmp = transformed[len-i-1];
		//10 -> a(65)
		if (tmp > 9) {
			tmp += 55;
		       	cout << (char) tmp;
		}
		else 
			cout << tmp;
	}


	return 0;

}
