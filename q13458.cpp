#include "q13458.h"

string q13458::solve(stringstream* input) {
	int N, B, C;
	int tmp;
	vector<int> A;

	(*input) >> N;
	for (int i = 0; i < N; i++) {
		(*input) >> tmp;
		A.push_back(tmp);
	}
	(*input) >> B;
	(*input) >> C;

	long result = N;

	for (int i = 0; i < N; i++) {
		tmp = A[i] - B;
		if (tmp > 0) result += tmp / C + (tmp % C > 0);
	}

	return to_string(result);
}