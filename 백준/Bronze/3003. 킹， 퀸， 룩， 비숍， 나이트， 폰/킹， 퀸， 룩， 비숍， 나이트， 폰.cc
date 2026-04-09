#include <iostream>
#include <vector>

using namespace std;

/*
필요한 체스말의 갯수를 구하는 문제. 입력으로 갖고있는 체스말의 개수를 배열로 입력받는다.
배열의 원소는 1번째부터 6번째까지 각각 킹, 퀸, 룩, 비숍, 나이트, 폰이며
결과값이 음수라면 그 개수만큼 피스를 빼야 하는 것이고, 양수면 피스를 더해주어야 한다.
*/

/*일단 기본 체스 세트를 배열로 설정하고, vector를 사용해 배열을 입력받으면 될 것 같다.
그 이후 기본 세트 배열 원소에서 입력받은 배열 원소를 빼서 새로운 배열에 저장하고, 그 값을 출력하면 될 듯 하다.*/

int main() {
	
	int set[6] = { 1,1,2,2,2,8 };		//체스를 위해 필요한 기본 세트 배열
	vector <int> handed;		//갖고있는 체스 피스 개수를 입력받을 배열

	for (int i = 0; i < 6; i++) {		//체스 피스 개수 입력받기
		int temp;
		cin >> temp;
		handed.push_back(temp);
	}

	int needed[6];		//최종적으로 더하거나 빼야할 피스의 개수를 담을 배열
	for (int j = 0; j < 6; j++) {
		needed[j] = set[j] - handed[j];
	}

	for (int k = 0; k < 6; k++) {
		cout << needed[k] << " ";
	}

}