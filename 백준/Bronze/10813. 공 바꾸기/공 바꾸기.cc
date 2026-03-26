#include <iostream>
#include <vector>

using namespace std;

/*
N과 M을 입력으로 받음. N은 배열의 크기, M은 시행 반복 횟수.
N의 크기의 배열에는 처음엔 배열 원소의 번호에 맞는 공이 들어있음. (1번째엔 1, 2번째엔 2)
M번 반복하고, i와 j를 M번 입력으로 받고, i번째와 M번째의 배열 원소를 교환하는 문제.
*/

int main() {

	int N;		//배열 크기
	cin >> N;

	int M;		//시행 반복 횟수
	cin >> M;

	int i, j;

	vector <int> arr(N);
	for (int h = 0; h < N; h++) {		//배열 원소 값 지정
		arr[h] = h + 1;
	}

	/*
	배열 원소를 교체할 때, algorithm 라이브러리 함수를 불러와 swap함수를 사용하는 방법과,
	temp 변수를 이용해 두 원소를 교체하는 방법이 생각남.
	두번째 방법을 사용해서 해보겠음.
	*/

	for (int x = 0; x < M; x++) {		//M번 반복
		int temp = 0;		//배열 원소 교환시 일시적으로 값을 저장할 temp변수
		cin >> i;	cin >> j;

		temp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = temp;
	}

	for (int g = 0; g < N; g++) {		//배열 원소 출력
		cout << arr[g] << " ";
	}
}