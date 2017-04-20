
/*************************************************************
* 
*	깊이 우선 탐색(DFS) 예제
*
* 2개의 노드가 인접하지 않게 타입을 정할 수 있는지를 판별
*
* (입력) 그래프
* (출력) 1: 가능 / 0: 불가능
*
****************************************************************/


#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[1001];
bool impossible = false;
bool visited[1001];
int AorB[1001];

void dfs (int s, int kind) {	//A=1, B=2

	for (int i=0; i<adj[s].size(); i++) {	//모든 S와 연결된 vertext들에 대해서
		if(!visited[adj[s][i]] ) {	//연결된 i번째 vertext가 방문하지 않은 노드라면
			visited[adj[s][i]]=true;
			if(kind == 1) {	//만약 내가 A이면
				dfs(adj[s][i], 2);
				AorB[adj[s][i]]=2;
			}
			else {
				dfs(adj[s][i], 1);
				AorB[adj[s][i]] = 1;
			}
		}
		else {	//방문 한 노드일 경우
			if(AorB[adj[s][i]]==kind)
				impossible = true;
		}
	}
}

int main (int argc, char** argv) {
	
	freopen("input_sample.txt", "r", stdin);
	setbuf(stdout, NULL);

	int T;
	int test_case;

	scanf("%d", &T);

	/*각 테스트 케이스에 대해서*/
	for (test_case =1; test_case <= T; test_case++) {
		int v, e;
		impossible = false;
		scanf("%d %d", &v, &e);
	
		/*변수 초기화*/
		for (int i=0; i<=v; i++) {
			visited[i] = false;
			adj[i].clear();
			AorB[i]=-1;
		}

		/*그래프 저장*/
		for (int i=0; i<e; i++) {
			int s, d;
			scanf("%d %d", &s, &d);
			adj[s].push_back(d);
			adj[d].push_back(s);
		}

		/*방문 시작*/
		for (int i=0; i<=v; i++) {
			if (visited[i] == false) {
				visited[i] = true;
				AorB[i]=1;
				dfs(i, 1);
			}
		}

		/*정답 출력*/

		printf("Case #%d\n", test_case);
		if (impossible)
			cout << "0" << endl;
		else
			cout << "1" << endl;


	}


	return 0;
}
