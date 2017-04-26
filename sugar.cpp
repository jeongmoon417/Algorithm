/**************************************************************************
 *
 *	설탕 배달
 *
 *	설탕 가게에서 N킬로그램을 배달 : 3kg 봉지, 5kg 봉지가 있을 때
 *	N킬로그램을 배달하기 위해 필요한 최소의 봉지의 수를 출력
 *
 *
 * 	(입력) 설탕의 중량
 *	(예제 입력) 18
 *	(출력) 필요한 최소의 봉지 수, 불가하다면 -1
 *	(예제 출력) 4
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
