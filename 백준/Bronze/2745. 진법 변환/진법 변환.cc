#include <iostream>
#include <string>
using namespace std;

/* 입력으로 N과 B를 입력받음. B진법 N을 10진수로 변환하는 문제.
10 이상의 진법은 10부터 A, 11은 B ... 35는 Z로 한다. (2 <= B <= 36) */

// 아마 B를 입력받은 후 B - 'A' 이런 식으로 해야하지 않을까.. 싶음. 문자로 입력받아야 할듯함.
// 그렇다면 if(B >= 'A') 이렇게? B = B - 'A'..하고, + 10 하면 되지않나? A면 0 + 10 = 10이고, B면 11이니까
// 아니다 B는 어차피 정수니까 상관 없겠네. N이 중요한거지.

// 그 후 반복문 밖에 int multi = 1 해놓고, 반복문 마지막마다 * B 해주면 될듯한데

int main() {
    string N;
    int B;

    cin >> N >> B;

    int Multi = 1, Deci = 0;
    for(int i = N.length() - 1; i >= 0; i--) {
        if(N[i] >= 'A') {
            Deci += (((N[i] - 'A') + 10) * Multi);
        }
        else {
            Deci += ((N[i] - '0') * Multi);
        }
        Multi *= B;
    }

    cout << Deci << endl;

    return 0;
}