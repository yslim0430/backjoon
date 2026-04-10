#include <iostream>
#include <string>

using namespace std;

/*
문자열을 입력받고 크로아티아 알파벳의 갯수를 출력하는 문제
크로아티아 알파벳은 기존 알파벳에 더해
"c=, c-, dz=, d-, lj, nj, s=, z=" 이 존재한다. 문자열은 알파벳 소문자와 '-', '='으로만 이루어져 있다.
*/

/*시작하기 전엔 조금 감이 안잡힌다. 일단 알파벳 개수를 세는 것부터 시작해야 할 것 같은데..
그러고 그 후에는 어쩌지? 저 8개의 경우와 같은 경우를 따로 빼야할 것 같은데..
일단 저 8개의 알파벳을 담은 문자열을 만들어 놓자니.. 'c=' 등을 원소 하나로 지정할 수 있는 것도 아니고..*/

/*일단 if문을 사용하는 방식으로 방향성을 잡아보자. 8개의 크로아티아 알파벳을 담당하는 크기 8인 배열을 만들어놓고,
if문의 조건을 만족하면 해당하는 배열 원소 +1을 한 다음, 나머지 전부 다 더하는거지.
근데 생각해보니, 굳이 배열을 사용할 필요가 없는데?
알파벳 총 갯수 저장할 변수 만들어놓고, 크로아티아 알파벳이면 변수++ 하고, 다다음 원소부터 비교해야 하니까 i++하고 continue하면
i + 2돼서 문제 없을 것 같은데?*/

/*반복문에 i+1, i+2 이런식으로 사용하면 결국 문자열의 범위를 넘어버리게 되는거 아닌가??
아니지..오히려 if문이니까 해당하는 문자가 아니면 그냥 처리를 안해버리지 않을까?*/

int main() {

	string S;		//문자열 입력받기
	getline(cin, S);

	int alpha = 0;		//최종 알파벳의 개수를 저장할 변수

	for (int i = 0; i < S.length(); i++) {			//문자열 알파벳 검사용 반복문
		if (S[i] == 'c') {
			if (( S[i + 1] == '=' ) || ( S[i + 1] == '-')) {
				alpha++;
				i++;
				continue;
			}
			else {			//일반적인 알파벳일 경우, 알파벳 +1 하고 continue
				alpha++;
				continue;
			}
		}

		else if (S[i] == 'd') {
			if ((S[i + 1] == 'z') && (S[i + 2] == '=')) {
				alpha++;
				i += 2;			//'dz='라면, 그 다음 원소부터 다시 검사
				continue;
			}
			else if (S[i + 1] == '-') {
				alpha++;
				i++;
				continue;
			}
			else {			//일반적인 알파벳일 경우, 알파벳 +1 하고 continue
				alpha++;
				continue;
			}
		}

		else if (S[i] == 'l') {
			if (S[i + 1] == 'j') {
				alpha++;
				i++;
				continue;
			}
			else {			//일반적인 알파벳일 경우, 알파벳 +1 하고 continue
				alpha++;
				continue;
			}
		}

		else if (S[i] == 'n') {
			if (S[i + 1] == 'j') {
				alpha++;
				i++;
				continue;
			}
			else {			//일반적인 알파벳일 경우, 알파벳 +1 하고 continue
				alpha++;
				continue;
			}
		}

		else if (S[i] == 's') {
			if (S[i + 1] == '=') {
				alpha++;
				i++;
				continue;
			}
			else {			//일반적인 알파벳일 경우, 알파벳 +1 하고 continue
				alpha++;
				continue;
			}
		}

		else if (S[i] == 'z') {
			if (S[i + 1] == '=') {
				alpha++;
				i++;
				continue;
			}
			else {			//일반적인 알파벳일 경우, 알파벳 +1 하고 continue
				alpha++;
				continue;
			}
		}

		else {			//일반적인 알파벳일 경우, 알파벳 +1 하고 continue
			alpha++;
			continue;
		}
	}

	cout << alpha << endl;
}