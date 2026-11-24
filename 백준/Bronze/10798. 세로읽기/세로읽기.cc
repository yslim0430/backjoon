#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> Words;

    for(int i = 0; i < 5; i++) {
        string column;
        cin >> column;
        Words.push_back(column);
    }

    int i = 0;
    int j = 0;
    for(i = 0; i < 15; i++) {       // i는 열 인덱스
        for(j = 0; j < 5; j++) {                 // j는 행 인덱스
            if(i >= Words[j].size()) {
                continue;
            }
            if(Words[j][i] == '\0') {
                continue;
            }
            else {
                cout << Words[j][i];
            }
        }
    }

    return 0;
}