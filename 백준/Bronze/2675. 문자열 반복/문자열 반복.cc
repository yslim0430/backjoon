#include <iostream>
#include <string>

using namespace std;

/*
반복 횟수를 입력으로 받고, 각 반복마다 다시 반복 횟수와 문자열을 입력으로 받는다.
입력으로 받은 반복 횟수만큼 문자열의 각 문자를 반복횟수만큼 반복해서 출력한다.
ex) 3 man -> mmmaaannn
*/

/*
우선 T번 반복해야 하므로, 가장 큰 총 반복문 1개를 사용하고
그 안에 각 원소를 반복해야 하므로 0부터 마지막 배열원소까지 반복문 1개,
그 다음 반복횟수 R만큼 반복해야하므로 다시 반복문 1개, 총 3개의 반복문을 사용하면 될 것 같음.
근데 시간복잡도가 좀 클 것 같아서 생각 더 해봐야할듯..
*/

int main() {

	int T;		//테스트 케이스 수
	cin >> T;

	for (int i = 0; i < T; i++) {
		int R;		//반복 횟수
		cin >> R;
		
		string S;	//문자열
		cin >> S;

		for (int j = 0; j < S.length(); j++) {
			for (int k = 0; k < R; k++) {
				cout << S[j];
			}
		}
		cout << endl;
	}
}