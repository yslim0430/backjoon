#include <iostream>
#include <string>

using namespace std;

/*
입력으로 주어진 문자열이 팰린드롬(앞뒤가 대칭인 글자)인지 확인하는 문제. 맞다면 1, 아니면 0을 출력하는 문제
*/

/*문자열을 입력으로 받은 다음, 반복문을 i = 1부터 length() / 2까지 반복하고,
i와 length() - 1번째 원소를 비교해서 같으면 1을 출력하면 될 것 같음.
근데 처음 비교만 맞고 그 다음 글자부턴 또 다를 수도 있을텐데 그건 어떻게 비교하면 좋을까?
ex) leval 이런 단어면 l과 l은 같은데, e와 a가 다르잖아.
for문을 써서 i가 length() / 2까지 가면 1을 출력한다..로 가면 안되는게
마지막에 다를 수도 있음.
그럼 do while문도 배제
while문을 쓰고 i에 조건을 달자. i가 length() / 2보다 작을 경우에만 돌아가게 하고, i가 length() / 2라는 소리는 마지막 글자까지 같다는 거니까.*/

int main() {

	string S;
	cin >> S;

	int i = 0;
	while (i < S.length() / 2) {
		if (S[i] != S[S.length() - 1 - i]) {
			break;
		}
		i++;
	}

	if (i == (S.length() / 2)) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}
}