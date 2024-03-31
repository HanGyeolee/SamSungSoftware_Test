// 실행 시켜볼 문제 헤더 불러오기
#include "q14501.h"

int main(void) {
	Question *Q = new q14501();

	clock_t start, finish;
	string answer;
	stringstream os;

	// inputs 과 outputs 의 길이를 동일하게 맞춰야 동작
	for (int i = 0; i < Q->inputs.size(); i++) {
		os.str(Q->inputs[i]);

		start = clock();

		// 실행 시켜볼 문제
		answer = Q->solve(&os);

		finish = clock();
		if ((finish - start) / CLOCKS_PER_SEC < TIME_LIMIT) {
			if (answer == Q->outputs[i])
				cout << "정답" << endl;
			else
				cout << "오답" << endl;
		}
		else
			cout << "시간 초과" << endl;

		os.clear();
	}
	for (int i = 0; i < Q->outputs.size(); i++) {
	}

	return 0;
}