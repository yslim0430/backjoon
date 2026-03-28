#include <iostream>
#include <vector>

using namespace std;

/*
N을 입력으로 받는다. N은 배열의 크기이고, 배열 원소 중 최댓값은 M 이라 한다.
최댓값을 제외한 나머지 배열 원소들을 원소/M*100을 해 새로운 배열을 만든다.
그 후 새로이 배열 원소의 평균을 구하는 문제이다.
*/


int main() {
	
	int N;		//배열의 크기
	cin >> N;

	vector <double> arr(N);

	for (int i = 0; i < N; i++) {		//배열 원소 입력받기
		cin >> arr[i];
	}

	int M = 0;		//배열 원소 최댓값 초기화
	for (int j = 0; j < N; j++) {		//배열 원소 최댓값 찾기
		if (arr[j] > M) {
			M = arr[j];
		}
	}

	for (int k = 0; k < N; k++) {		//배열원소 바꾸기
		arr[k] = arr[k] * 100 / M;
	}

	double sum = 0, average = 0;		//sum은 합, average는 평균
	for (int v = 0; v < N; v++) {
		sum += arr[v];
	}

	average = sum / N;

	cout << average << " \n";
}