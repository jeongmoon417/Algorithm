/****************************************
 *
 * 숫자 읽기 프로그램
 *
 *
 * (입력) 99999 이하의 수
 * (출력) 한글로 읽을 때의 스트링 
 *
 * **************************************/


#include <iostream>
#include <string>

using namespace std;

int main () {

	string digit;

	string danwi[5];

	danwi[0] ="";
       	danwi[1] = "sip";
	danwi[2] = "beak";
	danwi[3] = "cheon";
	danwi[4] = "man";
	danwi[5] = "sipman";
	
	string reading[10];

	reading[0] = "";
	reading[1] = "il";
	reading[2] = "i";
	reading[3] = "sam";
	reading[4] = "sa";
	reading[5] = "oh";
	reading[6] = "yuk";
	reading[7] = "chil";
	reading[8] = "pal";
	reading[9] = "gu";


	cout << "input digits : ";
	cin >> digit;

	int len = digit.length();


	for (int i=0; i<5; i++){
		if(len - i > 0) {
			int num = ((int)digit[i]) - 48;
			
			if (num != 0){
				cout << reading[num] << " " << danwi[len-i-1] << " ";
			}
		}
	}
	
	return 0;
}
