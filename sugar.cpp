/**************************************************************************
 *
 *	���� ���
 *
 *	���� ���Կ��� Nų�α׷��� ��� : 3kg ����, 5kg ������ ���� ��
 *	Nų�α׷��� ����ϱ� ���� �ʿ��� �ּ��� ������ ���� ���
 *
 *
 * 	(�Է�) ������ �߷�
 *	(���� �Է�) 18
 *	(���) �ʿ��� �ּ��� ���� ��, �Ұ��ϴٸ� -1
 *	(���� ���) 4
 *
 *
 * *************************************************************************/


#include <iostream>

using namespace std;

int main (void) {
	int sugar;

	cin >> sugar;

	int back5k, back3k;
	int rest5=-1;
	int rest3 = -1;

	back5k=sugar/5 +1;

	while((rest3 != 0) && (back5k >0)) {

		back5k--;
				
		rest5 = sugar - back5k*5;
		back3k = rest5/3;
		rest3 = rest5%3;

	}

	
	if(rest3 != 0)
		cout << -1;
	else
		cout << back5k + back3k;

}
