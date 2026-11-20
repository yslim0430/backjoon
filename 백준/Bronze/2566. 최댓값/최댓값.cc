#include <iostream>
using namespace std;

int main() {
    int arry[9][9] = {0};

    int max = 0;
    int Iindex = 0, Jindex = 0;
    for(int i = 0 ; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            int temp;
            cin >> temp;
            arry[i][j] = temp;

            if(temp >= max) {
                max = temp;
                Iindex = i + 1;
                Jindex = j + 1;
            }
        }
    }

    cout << max << "\n" << Iindex << " " << Jindex << endl;

    return 0;
}