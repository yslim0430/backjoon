#include <iostream>
#include <string>

using namespace std;

/*다이얼로 전화를 걸기 위해 걸리는 시간을 구하는 문제. 입력으로 받은 문자열에 해당하는 번호로
전화를 걸기 위해 걸리는 시간을 계산하는 문제*/

/*일단 처음으로 드는 생각은, 일단 문자열을 받은 다음 각 문자열 원소를 알파벳과 비교해서
그 알파벳에 해당하는 시간을 더해주는 방식으로 가면 될듯.
근데 그러면 if문을 9개를 써야할 것 같은데.. 더 나은 방식은 없나?*/

int main() {

	string S;
	cin >> S;

	int time = 0;
	for (int i = 0; i < S.length(); i++) {
		if ((S[i] >= 'A') && (S[i] <= 'C'))
			time += 3;
		else if ((S[i] >= 'D') && (S[i] <= 'F'))
			time += 4;
		else if ((S[i] >= 'G') && (S[i] <= 'I'))
			time += 5;
		else if ((S[i] >= 'J') && (S[i] <= 'L'))
			time += 6;
		else if ((S[i] >= 'M') && (S[i] <= 'O'))
			time += 7;
		else if ((S[i] >= 'P') && (S[i] <= 'S'))
			time += 8;
		else if ((S[i] >= 'T') && (S[i] <= 'V'))
			time += 9;
		else if ((S[i] >= 'W') && (S[i] <= 'Z'))
			time += 10;
	}

	cout << time << endl;
}