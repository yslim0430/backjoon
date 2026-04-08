#include <iostream>
#include <string>

using namespace std;

/*
반복 횟수를 입력으로 받고, 반복마다 문자열을 입력으로 받은 다음 문자열의 첫 글자와 마지막 글자를 출력하는 문제.
일단 입력으로 반복횟수를 받고, 반복문 안의 반복문을 사용하면 될듯.
for문으로 입력을 우선 받은 다음, for문을 또 써서 0번째와 마지막번째를 출력.
마지막 원소 = 문자열의 크기번째 원소이므로 length()쓰면 될 듯.
*/

int main() {

	int number;
	cin >> number;

	for (int i = 0; i < number; i++) {
		string str;
		cin >> str;
		cout << str.front() << str.back() << endl;
	}
}