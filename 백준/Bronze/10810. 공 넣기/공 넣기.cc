#include <iostream>
#include <vector>

using namespace std;

/*N과 M을 입력으로 받음, N은 배열의 크기, M은 시행 반복 횟수.
N개의 바구니에 공을 담을 것임,
2번째 줄부터 i,j,k의 입력을 받음. i는 시작 바구니 번호, j는 마지막 바구니 번호, k는 공의 번호.
i번째 바구니부터 j번째 바구니까지 k가 적혀있는 공을 채워넣는 것을 M번 반복한 후
최종 바구니에 담겨있는 공들을 출력하는 문제.
*/

int main() {

	int N;		//배열 크기
	cin >> N;

	int M;		//시행 횟수
	cin >> M;

	vector <int> arr(N);

	int i;	int j;	int k;		//i번째 바구니부터 j번째 바구니까지 k가 적혀있는 공을 넣는다

	/*
	일단 M번 반복해야 하니까, M번 반복하는 반복문 안에 배열 원소를 교체하는 반복문을 넣어야 할 것 같음.
	i, j, k 3개의 입력을 M번 입력받고, 그에 따른 반복문을 작성해야 할 듯함.
	*/

	for (int x = 0; x < M; x++) {		//M번 반복하는 반복문
		cin >> i;	cin >> j;	cin >> k;
		for (int a = i - 1; a < j; a++) {		//배열 원소 교체 반복문
			arr[a] = k;
		}
	}

	for (int y = 0; y < N; y++) {		//배열 원소 출력 반복문
		cout << arr[y] << " ";
	}
}