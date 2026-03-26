#include <iostream>
#include <vector>

using namespace std;

//크기 N인 배열을 입력으로 받고, X보다 작은 배열 원소들을 출력하는 프로그램

int main() {
	int N;		//배열 크기
	cin >> N;

	int X;		//문제에서의 X
	cin >> X;

	vector <int> arr;	//배열을 입력받기 위한 동적배열

	for (int i = 0; i < N; i++) {		//배열 입력을 위한 반복문
		int temp;		//반복문을 통한 배열 입력 전, temp 변수에 입력받고 push.back 사용
		cin >> temp;
		arr.push_back(temp);
	}

	for (int j = 0; j < N; j++) {		//배열 원소가 X보다 작으면 출력
		if (arr[j] < X) {
			cout << arr[j] << " ";
		}
	}

}