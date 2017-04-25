/*******************************************************************************************
 *         
 *         진법 변환2
 *
 *
 *	10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램
 *
 *	10진법을 넘어가는 진법은 숫자로 표시할 수 없는 경우에는 알파벳 대문자를 사용
 *
 *	A: 10, B: 11, ..., F: 16, ..., Y: 34, Z: 35
 *
 *
 * *****************************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main () {
	int N, B, rest, portion;
	vector <char> transformed;

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
		cout << tmp;;
	}

	return 0;

}
