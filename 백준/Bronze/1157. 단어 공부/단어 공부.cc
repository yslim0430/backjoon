#include <iostream>
#include <string>

using namespace std;

/*
알파벳 대소문자로 이루어진 문자열을 입력받고, 대,소문자 구분없이 가장 많이 입력된 알파벳을 대문자로 출력하는 문제
*/

/*일단 드는 생각은..이전에 배운것처럼 a부터 Z까지 입력된 배열을 사용하는 것? 근데 너무 많지않나 배열 원소가?
if문으로 일일히 a or A로 써서 풀기엔 코드가 너무 투머치할 것 같음..
시간 복잡도 자체는 O(N)으로 마무리할 수 있을 것 같긴 한데..
그럼 소문자를 다 대문자로 바꿔버리고 계산해도 되잖아*/

/*마지막에 문제가 있네.. 가장 많은 알파벳이 여러개면 ?를 출력해야 하는데, 무작정 같은 경우로 넣자니
갯수가 0개 0개 이런것도 ?로 출력해버릴 수도 있음..
반복문을 아예 두번 돌려버릴까? 그러면 가장 많은게 중복되면 ?가 출력될 수 있잖아.*/

int main() {

	string S;
	cin >> S;

	int most[26] = { 0 };

	for (int i = 0; i < S.length(); i++) {		//문자열 S를 모두 대문자로 바꿔주는 반복문
		S[i] = toupper(S[i]);
	}

	for (int j = 0; j < S.length(); j++) {		//S 원소 알파벳에 해당하는 most의 원소 증가
		most[(S[j] - 'A')]++;
	}

	int Most_Alpha = -333;			//가장 많은 알파벳의 번호를 담을 변수
	int Most_Alpha_num = 0;		//가장 많은 알파벳의 위치를 저장할 변수

	for (int k = 0; k < 26; k++) {		//가장 많은 알파벳의 번호를 담는 반복문
		if (most[k] > Most_Alpha) {
			Most_Alpha = most[k];
			Most_Alpha_num = k;
		}
	}

	int again = 0;		//가장 많은 알파벳의 개수를 구하는 변수

	for (int m = 0; m < 26; m++) {		//가장 많은 알파벳이 2개 이상인지 확인하는 반복문
		if (most[m] == Most_Alpha) {		//개수가 같은 원소가 존재하면 again++
			again++;
		}
	}

	if (again >= 2) {		//만약 again이 2 이상이라면 ?를 출력하고 프로그램 종료
		cout << "?" << endl;
		return 0;
	}

	char Alpha = 65 + Most_Alpha_num;		//특정값이 발견되지 않으면 해당 대문자 알파벳을 출력

	cout << Alpha << endl;
}