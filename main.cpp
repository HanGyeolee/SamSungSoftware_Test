// ���� ���Ѻ� ���� ��� �ҷ�����
#include "q13458.h"

int main(void) {
	clock_t start, finish;
	string answer;
	stringstream os;

	// inputs �� outputs �� ���̸� �����ϰ� ����� ����
	for (int i = 0; i < inputs.size(); i++) {
		os.str(inputs[i]);

		start = clock();

		// ���� ���Ѻ� ����
		answer = q13458_solve(&os);

		finish = clock();
		if ((finish - start) / CLOCKS_PER_SEC < TIME_LIMIT) {
			if (answer == outputs[i])
				cout << "����" << endl;
			else
				cout << "����" << endl;
		}
		else
			cout << "�ð� �ʰ�" << endl;

		os.clear();
	}
	for (int i = 0; i < outputs.size(); i++) {
	}

	return 0;
}