#include <iostream>
#include <string>

using namespace std;

/*
세자리수 2개를 입력으로 받고 뒷자리부터 읽었을 때 더 큰 수를 출력하는 문제
ex) 437 258 -> 734 852 -> 852
*/

/*문자열을 사용해서 입력을 받은 다음, A[0]과 A[2]를 바꿔주면 될 것 같음.
문제는 바뀐 두 수를 비교하는건데, 100의자리부터 비교하고, 10의자리 비교하고, 1의자리 비교해서 더 큰 수 출력하면 될듯한데??
아니 그냥 문자열 자체를 비교해도 되나?*/

int main() {

	string A;	string B;
	cin >> A;	cin >> B;

	char temp1 = NULL;
	temp1 = A[2];
	A[2] = A[0];
	A[0] = temp1;

	char temp2 = NULL;
	temp2 = B[2];
	B[2] = B[0];
	B[0] = temp2;

	if (A < B) {
		cout << B << endl;
	}
	else {
		cout << A << endl;
	}
}