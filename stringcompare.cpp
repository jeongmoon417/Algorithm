/***********************************************
 *
 * ���ڿ� ���� �� ���α׷�
 *
 *
 *
 * (�Է�) �� ���ڿ�
 * (���) 1 : ���ڿ��� ������ ����
 * 	  0 : ���ڿ��� ������ �ٸ�
 *
 *
 * *********************************************/

#include <iostream>
#include <string>

using namespace std;

int main () {

	string str1, str2;

	/*�� ������ ������ ���� ���� �迭*/
	int num1[26];
       	int num2[26];

	bool same = true;

	/*�迭 �ʱ�ȭ*/
	for (int i=0; i<26; i++) {
		num1[i]=0;
		num2[i]=0;
	}

	cout << "type 2 strings : ";
	cin >> str1 >> str2;

	int len1 = str1.length();
	int len2 = str1.length();

	for (int i=0; i<len1; i++) {
		num1[int (str1[i] % 26)]++;
	}

	for (int i=0; i<len2; i++) {
		num2[int (str2[i] %26)]++;
	}


	for (int i=0; i<26; i++) {
		if (num1[i] != num2[i])
			same=false;
	}
	
	cout << "::::: result :::::\n " << same;
	return 0;
}

