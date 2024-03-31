// ���� ���Ѻ� ���� ��� �ҷ�����
#include "q14501.h"

int main(void) {
	Question *Q = new q14501();

	clock_t start, finish;
	string answer;
	stringstream os;

	// inputs �� outputs �� ���̸� �����ϰ� ����� ����
	for (int i = 0; i < Q->inputs.size(); i++) {
		os.str(Q->inputs[i]);

		start = clock();

		// ���� ���Ѻ� ����
		answer = Q->solve(&os);

		finish = clock();
		if ((finish - start) / CLOCKS_PER_SEC < TIME_LIMIT) {
			if (answer == Q->outputs[i])
				cout << "����" << endl;
			else
				cout << "����" << endl;
		}
		else
			cout << "�ð� �ʰ�" << endl;

		os.clear();
	}
	for (int i = 0; i < Q->outputs.size(); i++) {
	}

	return 0;
}