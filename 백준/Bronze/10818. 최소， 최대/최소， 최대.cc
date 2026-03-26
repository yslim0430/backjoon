#include <iostream>
#include <vector>

using namespace std;

//N개의 정수를 배열 입력으로 받고, 최대, 최솟값을 구하는 문제

int main() {

	int N;
	cin >> N;		//N 입력받기

	vector <int> arr;		//입력받을 배열

	for (int i = 0; i < N; i++) {		//반복문으로 배열 입력받기
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	int max = -1000001, min = 1000001;		//max는 최댓값, min은 최솟값 (if문으로 대입하기 위해 max엔 작은 값, min엔 큰 값을 대입)
	for (int j = 0; j < N; j++) {
		if (arr[j] >= max) {
			max = arr[j];
		}
		if (arr[j] < min) {
			min = arr[j];
		}
	}

	cout << min << " " << max;

}