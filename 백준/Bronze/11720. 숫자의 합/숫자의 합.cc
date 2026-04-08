#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
숫자의 갯수를 입력으로 받고, 숫자들을 문자열로 입력받는다. 그 후 숫자들을 모두 더한 값을 출력하는 문제.
ex)"12345"  -> 15
문자열 string을 써서 str[0] + str[1] 이런식으로 더하려고 했는데 더해보니까 아스키코드를 더한 값을 출력함.
문자열에있는 원소들을 배열로 옮겨준 다음 더해주는 방식을 써야할듯??
아니면 '0'에 해당하는 아스키코드를 빼주고 더해줘야하거나?
*/

int main() {
	
	int num;
	cin >> num;

	string str;
	cin >> str;

	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += ( str[i] - '0');
	}

	cout << sum << endl;
}