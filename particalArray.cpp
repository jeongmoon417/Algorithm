/**************************************************************
 *	부분 배열
 *
 *	N개의 자연수로 이루어진 수열과 자연수 S가 주어졌을 때,
 *	합이 S보다 같거나 큰 수열의 부분배열(subarray) 중
 *	크기를 구하는 문제
 *
 * 	(예제 입력)
 * 	수열 : 5, 1, 3, 5, 10, 7, 4, 9, 2, 8
 * 	S : 15
 *
 *	(출력)
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

	/*각 테스트 케이스에 대해서*/
	for(test_case = 1; test_case <=T; test_case++) {

		int N, S, i;
		int max_value=0;
		int max_index=0;
		int answer=0;

		scanf("%d %d", &N, &S);
		
		int *ary = new int[N];

		for (i=0; i<N; i++) {
			scanf("%d", ary+i);

			//최대값과 그 인덱스
			if (ary[i] > max_value) {
				max_value = ary[i];
				max_index = i;
			} 
		}

		int start_index, end_index;	
		for (i=0; i<N; i++) {

			//최대값을 포함하는 1 ~ N 개의 배열들
			start_index = max(0, max_index - i);
			end_index = min(N, max_index + i);
			
			int j, k, w;
			k=end_index-i;
			for (j=start_index; j<=k; j++) {

				int sum=0;
				//합 구하기
				for (w=0; w<i+1; w++) {
					sum += ary[j+w];
				}

				//합이 S보다 작다면 빠져나간다
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



