/****************************************************
 * 		중복 제거 알고리즘
 *
 * 	1) 모든 원소 비교
 * 	2) 정렬 이용
 * 	3) 해시 이용
 *
 * *************************************************/


#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

//#define SIZE 10

using namespace std;


/* 임의의 문자열 생성 */
void createRandString(string* str, int size) {
	
	char temp;

	for (int i=0; i<size; i++) {
		temp = 'a' + (rand()%26);
		*str += temp;
	}
	
	
}
/*
vector byCompare1 (string str, int size) {
	
	vector <char> result;
	
	for (int i=0; i<size; i++) {
		for (int j=0; j<result.size(); j++) {
			if(result[j] == str[i])
				result.push_back(str[i]);			
		}
	}

	return result;
}
*/

void byCompare2 (string str, int size){
	/**********매우 중요!!**********/
	int count[26]={0,};

	/*알파벳 유무 검사*/
	for (int i=0; i<size; i++){
		count[str[i]%26]=1;		
	}

	cout << "\n\n";
	for (int i=0; i<size; i++){
		if(count[str[i]%26]==1){
			cout << str[i];
			count[str[i]%26]=0;
		}		
	}

}

int main () {

	int str_size;
	//vetor <char> rmvDup;

	cout << "======= Program for Removing duplication =======\n";
	cout << " *Enter size: ";
	
	//문자열의 크기 입력, 문자열 출력
	cin >> str_size;
	
	string str;
	createRandString(&str, str_size);
	cout << str << endl;

	//rmvDup = (str, str_size;

	byCompare2(str, str_size);

	//cout << rmvDup
	




	return 0;
}
