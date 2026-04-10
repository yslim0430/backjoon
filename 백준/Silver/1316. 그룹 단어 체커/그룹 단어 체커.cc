#include <iostream>
#include <string>

using namespace std;

/*
단어의 갯수 N과, 총 N개의 단어를 입력으로 받는다.
단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나오는 경우만을 말하는 그룹 단어의 개수를 출력하는 문제.
ex) aaaacccbb -> 그룹단어	abbbaccc -> 그룹단어 X
*/

/*일단 for문을 통해 문자열을 검사하고, 조건을 충족하면 그룹 단어의 개수를 저장할 변수에 +1을 하는 방식으로
틀을 잡고 시작하면 될 것 같음. 근데 문제는..연속으로 나오냐 안나오냐를 어떻게 판별할 수 있을까?
일단 같은지 다른지를 비교해야 할 것 같은데..*/

/*재귀함수 형태를 사용해볼까?? 가능할진 모르겠지만 연속된 배열 원소를 비교하고 같으면 다시 함수를 호출해서
그 다음 원소랑 비교하고, 만약 다른데 그 뒤에 같은 원소가 발견된다 -> 연속함수가 아닌거지*/

/*재귀함수 말고 find와 replace 써서 사용해봐도 될 것 같은데?*/

/*방법이 잘 안떠오르네...어떻게 하면 쉬울까*/

int Conti_Word(string& S) {
	for (int i = 0; i < S.length() - 1; i++) {
		int button = 0;
		for (int j = i + 1; j < S.length(); j++) {
			if ((button == 1) && (S[i] == S[j])) {
				return 0;
			}
			if (S[i] != S[j]) {
				button = 1;
			}
		}
	}
	return 1;
}

int main() {

	int N;		//입력받을 단어의 개수
	cin >> N;

	int num = 0;		//그룹단어의 개수를 저장할 변수

	for (int i = 0; i < N; i++) {
		string S;
		cin >> S;
		
		num += Conti_Word(S);
	}

	cout << num << endl;
}