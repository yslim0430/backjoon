#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector <int> arr;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	int v;
	cin >> v;

	int number = 0;
	for (int j = 0; j < N; j++) {
		if (arr[j] == v) {
			number++;
		}
	}

	cout << number << " \n";
}