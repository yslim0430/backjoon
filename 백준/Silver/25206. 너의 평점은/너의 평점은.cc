#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*전공과목의 학점평균을 계산하는 문제. 20줄에 걸쳐 과목명(대소문자 및 숫자), 학점, 등급이 주어진다.
P는 계산에서 제외하고 전공 과목의 학점 평균을 계산하는 문제이다.*/

/*일단 반복문을 통해 과목명은 string으로 입력받으면 될 것 같고, 학점은 double? 등급은 문자열로 입력받고
각각 A+부터 4.5에 해당하도록 설계하면 될 것 같다.
그러고 학점*등급을 계산하고, 따로 P가 아닌 전공과목 개수를 저장한 후 나누어주면 될 듯*/

int main() {
	double total_credit = 0;		//학점 총합
	double total_grade = 0;			//(학점*과목평점)의 총합
	vector<string>grade_cal = { "A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F" };		//미리 학점 계산을 위해 준비한 벡터

	for (int i = 0; i < 20; i++) {
		string name;		//과목명
		cin >> name;

		double credit;		//학점
		cin >> credit;

		string grade;		//등급
		cin >> grade;

		double number = 0.0;		//등급을 숫자로 변환한 값

		if (grade != "P") {

			auto it = find(grade_cal.begin(), grade_cal.end(), grade);		//입력받은 학점이 몇번째인지 확인
			int final_grade = it - grade_cal.begin();						//배열의 인덱스로 전환

			if (final_grade != 8) {			//학점이 F가 아니라면
				number = 4.5 - (0.5 * final_grade);
			}
			else {							//학점이 F라면
				number = 0.0;
			}

			total_credit += credit;				//학점 총합
			total_grade += (number * credit);	//(학점*전공평점) 총합
		}
	}

	double Answer = total_grade / total_credit;

	cout << Answer << endl;
}