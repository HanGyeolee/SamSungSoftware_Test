#include "q13458.h"

vector<string> inputs = {
	"1\n1\n1 1",
	"3\n3 4 5\n2 2",
	"5\n1000000 1000000 1000000 1000000 1000000\n5 7",
	"5\n10 9 10 9 10\n7 20",
	"5\n10 9 10 9 10\n7 2",
	"2\n1000000 1\n999999 1",
	"3\n3 4 5\n3 1",
};

vector<string> outputs = {
	"1",
	"7",
	"714290",
	"10",
	"13",
	"3",
	"6",
};

string q13458_solve(stringstream* input) {
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