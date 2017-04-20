/****************************************************
 * 		�ߺ� ���� �˰�����
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
#include <ctime>

//#define SIZE 10

using namespace std;


/* ������ ���ڿ� ���� */
void createRandString(string* str, int size) {
	
	char temp;
	srand((unsigned int) time(NULL));

	for (int i=0; i<size; i++) {
		temp = 'a' + (rand()%26);
		*str += temp;
	}
	
	
}

/*���͸� ����� �ߺ�����*/
void byCompare1 (string str, int size) {
	
	vector<char> result;
	bool exsting;
	
	for (int i=0; i<size; i++) {
		exsting = false;
		for (int j=0; j<result.size(); j++) {
			if(result[j] == str[i])
				exsting = true;
		}
		if (!exsting)
			result.push_back(str[i]);
	}

	cout << "\n\n##RESULT##\n";
	for (int i=0; i<result.size(); i++) {
		cout << result[i];
	}
}


/*���ĺ������� ����� �ߺ�����*/
void byCompare2 (string str, int size){

	/**********�ʱ�ȭ**********/
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


void bySort (string str, int size) {
	
	char tmp;
	
	/*����*/
	for (int i=0; i< size; i++) {
		for (int j=i+1; j<size; j++) {
			if (str[i] > str [j]) {
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;			
			}
		}
	}
	
	tmp = '*';
	for (int i=0; i<size; i++){
		if(tmp != str[i]){
			tmp = str[i];
			cout << tmp;
		}
	}
}

int main () {

	int str_size;

	cout << "======= Program for Removing duplication =======\n";
	cout << " *Enter size: ";
	
	//���ڿ��� ũ�� �Է�, ���ڿ� ���
	cin >> str_size;
	
	string str;
	createRandString(&str, str_size);
	cout << str << endl;

	//byCompare2(str, str_size);
	//byCompare1(str, str_size);
	bySort(str, str_size);

	//cout << rmvDup
	




	return 0;
}