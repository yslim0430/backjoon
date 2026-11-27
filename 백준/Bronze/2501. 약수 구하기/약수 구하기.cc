#include <iostream>
#include <vector>
using namespace std;

/* 한번에 처리하면 편하니, 모든 약수들을 바로 vector로 배열에 저장한 다음
 K가 배열의 크기보다 크면 0을 출력하게 하면 될듯함. 그게 아니면 배열에서 바로 꺼내고 */

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> divisor;

    for(int i = 1; i <= N; i++) {
        if(N % i == 0) {
            divisor.push_back(i);
        }
    }

    if(K > divisor.size()) {
        cout << "0" << endl;
    }
    else {
        cout << divisor[K-1] << endl;
    }

    return 0;
}