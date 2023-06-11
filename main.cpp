// 실행 시켜볼 문제 헤더 불러오기
#include "q13458.h"

int main(void) {
	clock_t start, finish;
	string answer;
	stringstream os;

	// inputs 과 outputs 의 길이를 동일하게 맞춰야 동작
	for (int i = 0; i < inputs.size(); i++) {
		os.str(inputs[i]);

		start = clock();

		// 실행 시켜볼 문제
		answer = q13458_solve(&os);

		finish = clock();
		if ((finish - start) / CLOCKS_PER_SEC < TIME_LIMIT) {
			if (answer == outputs[i])
				cout << "정답" << endl;
			else
				cout << "오답" << endl;
		}
		else
			cout << "시간 초과" << endl;

		os.clear();
	}
	for (int i = 0; i < outputs.size(); i++) {
	}

	return 0;
}