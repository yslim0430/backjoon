#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
알파벳 소문자로만 이루어진 단어 S를 입력으로 받고, 각각의 알파벳에 대해서 알파벳이 단어에 처음 등장하는 위치를 출력하는 문제.
단어에 포함되지 않은 알파벳이라면 -1을 출력한다.
ex) back -> 1 0 3 -1 -1 ....
a의 아스키코드 = 97, z의 아스키코드 = 122
*/

/* 일단 string으로 단어 S의 입력을 받고, 변수 i를 97부터 122까지 반복문을 실행해보자.
그러고 나서 반복문 안의 반복문을 통해, str[j] == i면 j를 출력하고, 첫번째 등장 위치만 출력해야하니까 바로 break 사용해보자.
*/

/* 이렇게만 하고 출력해보니, 이상하게 -1이 너무 많이 출력됨. 생각해보니 반복문 안에 -1을 출력하는 걸 넣으면 계속 -1이 출력됨.
첫번째 반복문에서 검사용 변수 confirm을 만들고, 두번째 반복문에서 단어에 포함되어있는 알파벳이라면 confirm에 1을 대입해주자.
그러고 내부 반복문이 끝났는데도 confirm이 0이면 그때 -1을 출력하게 만들자.*/
int main() {

	string S;
	cin >> S;

	for (int i = 97; i <= 122; i++) {
		int confirm = 0;
		for (int j = 0; j < S.length(); j++) {
			if (S[j] == i) {
				cout << j << " ";
				confirm = 1;
				break;
			}
		}
		if (confirm == 0)
			cout << "-1 ";
	}
}