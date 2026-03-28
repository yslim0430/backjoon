#include <iostream>
#include <vector>

using namespace std;

/*
입력으로 N과 M을 받는다. N은 배열의 크기이며, 배열은 1부터 N까지 정렬되어있다.
M은 반복 시행의 횟수이며, 1번 시행마다 a와 b를 입력으로 받는다.
a와 b를 입력으로 받으면, a-1번째부터 b-1번째 배열을 역순으로 만드는 문제이다.
*/


int main() {
	
	int N;		//배열의 크기
	cin >> N;

	int M;		//반복 시행 횟수
	cin >> M;

	vector <int> arr(N);

	for (int i = 0; i < N; i++) {		//배열 초기값 지정
		arr[i] = i + 1;
	}


	/*
	여기서 생각해야 할 것은, M번 반복하는 반복문 안에 배열을 역순으로 바꾸는 기능을 넣어야 한다는 것임.
	시작인 a와 끝인 b를 입력으로 받으니까, Left와 Right 변수를 만들어서 각각 대입한 다음,
	끝부터 원소 하나씩 바꿔주면 될 것 같음!
	*/


	for (int j = 0; j < M; j++) {		//M번 반복하는 반복문
		int a, b;
		cin >> a;	cin >> b;

		int Left = a - 1, Right = b - 1;

		for (int k = Left; k <= (Left + Right) / 2; k++) {
			int temp = 0;		//배열 교환을 위해 잠시 보관하는 변수
			temp = arr[k];
			arr[k] = arr[Right - (k - Left)];
			arr[Right - (k - Left)] = temp;
		}
	}

	for (int v = 0; v < N; v++) {
		cout << arr[v] << " ";
	}
}