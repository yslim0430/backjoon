#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    
    vector<int> dice(7);
    dice[a]++, dice[b]++, dice[c]++, dice[d]++;
    
    for(int i = 1; i < 7; i++) {
        if(dice[i] == 0) {
            continue;
        }
        else if(dice[i] == 1) {
            
            for (int j = i + 1; j < 7; j++) {
                if (dice[j] == 1) {
                    for (int k = j + 1; k < 7; k++) {
                        if (dice[k] == 1) {
                            return i;
                        }
                        else if (dice[k] == 2) {
                            return (i * j);
                        }
                    }
                }
                else if (dice[j] == 2) {
                   for (int k = j + 1; k < 7; k++) {
                       if (dice[k] == 1) {
                           return (i * k);
                       }
                   }
                }
                else if (dice[j] == 3) {
                    answer = (10 * j + i)*(10 * j + i);
                    return answer;
                }
            }
                
        }
        else if(dice[i] == 2) {
            for(int j = i + 1; j < 7; j++) {
                if(dice[j] == 2) {
                    answer = (j + i)*(j - i);
                    return answer;
                }
                else if(dice[j] == 1) {
                    for(int k = j + 1; k < 7; k++) {
                        if(dice[k] == 1) {
                            answer = j * k;
                            return answer;
                        }
                    }
                }
            }
        }
        else if(dice[i] == 3) {
            for(int j = i + 1; j < 7; j++) {
                if(dice[j] == 1) {
                    answer = (10 * i + j) * (10 * i + j);
                    return answer;
                }
            }
        }
        else if(dice[i] == 4) {
            answer = 1111 * i;
            break;
        }
    }
    return answer;
}