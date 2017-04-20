#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[1001];
bool impossible = false;
bool visited[1001];
int AorB[1001];

void dfs (int s, int kind) {	//A=1, B=2

	for (int i=0; i<adj[s].size(); i++) {	//��� S�� ����� vertext�鿡 ���ؼ�
		if(!visited[adj[s][i]] ) {	//����� i��° vertext�� �湮���� ���� �����
			visited[adj[s][i]]=true;
			if(kind == 1) {	//���� ���� A�̸�
				dfs(adj[s][i], 2);
				AorB[adj[s][i]]=2;
			}
			else {
				dfs(adj[s][i], 1);
				AorB[adj[s][i]] = 1;
			}
		}
		else {	//�湮 �� ����� ���
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

	/*�� �׽�Ʈ ���̽��� ���ؼ�*/
	for (test_case =1; test_case <= T; test_case++) {
		int v, e;
		impossible = false;
		scanf("%d %d", &v, &e);
	
		/*���� �ʱ�ȭ*/
		for (int i=0; i<=v; i++) {
			visited[i] = false;
			adj[i].clear();
			AorB[i]=-1;
		}

		/*�׷��� ����*/
		for (int i=0; i<e; i++) {
			int s, d;
			scanf("%d %d", &s, &d);
			adj[s].push_back(d);
			adj[d].push_back(s);
		}

		/*�湮 ����*/
		for (int i=0; i<=v; i++) {
			if (visited[i] == false) {
				visited[i] = true;
				AorB[i]=1;
				dfs(i, 1);
			}
		}

		/*���� ���*/

		printf("Case #%d\n", test_case);
		if (impossible)
			cout << "0" << endl;
		else
			cout << "1" << endl;


	}


	return 0;
}
