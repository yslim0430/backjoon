#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;

    vector<vector<int>> colrow_one;
    vector<vector<int>> colrow_two;

    for(int i = 0; i < N; i++) {
        vector<int> temp;
        for(int j = 0; j < M; j++) {
            int element;
            cin >> element;
            temp.push_back(element);
        }
        colrow_one.push_back(temp);
    }

    for(int i = 0; i < N; i++) {
        vector<int> temp;
        for(int j = 0; j < M; j++) {
            int element;
            cin >> element;
            temp.push_back(element);
        }
        colrow_two.push_back(temp);
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            colrow_one[i][j] += colrow_two[i][j];
            cout << colrow_one[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}