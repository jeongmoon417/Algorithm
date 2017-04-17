/**************************************************************
 *	�κ� �迭
 *
 *	N���� �ڿ����� �̷���� ������ �ڿ��� S�� �־����� ��,
 *	���� S���� ���ų� ū ������ �κй迭(subarray) ��
 *	ũ�⸦ ���ϴ� ����
 *
 * 	(���� �Է�)
 * 	���� : 5, 1, 3, 5, 10, 7, 4, 9, 2, 8
 * 	S : 15
 *
 *	(���)
 *	2 (10, 7)
 *
 * ***********************************************************/

#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	freopen("sample_input.txt", "r", stdin);

	setbuf(stdout, NULL);

	int T;
	int test_case;

	scanf("%d", &T);

	/*�� �׽�Ʈ ���̽��� ���ؼ�*/
	for(test_case = 1; test_case <=T; test_case++) {

		int N, S, i;
		int max_value=0;
		int max_index=0;
		int answer=0;

		scanf("%d %d", &N, &S);
		
		int *ary = new int[N];

		for (i=0; i<N; i++) {
			scanf("%d", ary+i);

			//�ִ밪�� �� �ε���
			if (ary[i] > max_value) {
				max_value = ary[i];
				max_index = i;
			} 
		}

		int start_index, end_index;	
		for (i=0; i<N; i++) {

			//�ִ밪�� �����ϴ� 1 ~ N ���� �迭��
			start_index = max(0, max_index - i);
			end_index = min(N, max_index + i);
			
			int j, k, w;
			k=end_index-i;
			for (j=start_index; j<=k; j++) {

				int sum=0;
				//�� ���ϱ�
				for (w=0; w<i+1; w++) {
					sum += ary[j+w];
				}

				//���� S���� �۴ٸ� ����������
				if (sum > S) {
					answer = i+1;
					break;	
				}
			}
			if (answer > 0) {
				break;
			}
		}	
		
	
		printf("#testcase%d\n", test_case);	
		printf("%d\n", answer);
	}
	return 0;

}



