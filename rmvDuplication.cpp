/****************************************************
 * 		�ߺ� ���� �˰���
 *
 * 	1) ��� ���� ��
 * 	2) ���� �̿�
 * 	3) �ؽ� �̿�
 *
 * *************************************************/


#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

//#define SIZE 10

using namespace std;


/* ������ ���ڿ� ���� */
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
	/**********�ſ� �߿�!!**********/
	int count[26]={0,};

	/*���ĺ� ���� �˻�*/
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
	
	//���ڿ��� ũ�� �Է�, ���ڿ� ���
	cin >> str_size;
	
	string str;
	createRandString(&str, str_size);
	cout << str << endl;

	//rmvDup = (str, str_size;

	byCompare2(str, str_size);

	//cout << rmvDup
	




	return 0;
}
