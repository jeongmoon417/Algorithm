/*******************************************************************************************
 *         
 *         ���� ��ȯ2
 *
 *
 *	10���� �� N�� �־�����. �� ���� B�������� �ٲ� ����ϴ� ���α׷�
 *
 *	10������ �Ѿ�� ������ ���ڷ� ǥ���� �� ���� ��쿡�� ���ĺ� �빮�ڸ� ���
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
