/***********************************************
 *
 * 문자열 구성 비교 프로그램
 *
 *
 *
 * (입력) 두 문자열
 * (출력) 1 : 문자열의 구성이 같음
 * 	  0 : 문자열의 구성이 다름
 *
 *
 * *********************************************/

#include <iostream>
#include <string>

using namespace std;

int main () {

	string str1, str2;

	/*각 문자의 갯수를 세기 위한 배열*/
	int num1[26];
       	int num2[26];

	bool same = true;

	/*배열 초기화*/
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

