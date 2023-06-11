#include "q14501.h"
#include <stack>
#include <map>

vector<string> inputs = {
	"7\n3 10\n5 20\n1 10\n1 20\n2 15\n4 40\n2 200",
	"10\n1 1\n1 2\n1 3\n1 4\n1 5\n1 6\n1 7\n1 8\n1 9\n1 10",
	"10\n5 10\n5 9\n5 8\n5 7\n5 6\n5 10\n5 9\n5 8\n5 7\n5 6",
	"10\n5 50\n4 40\n3 30\n2 20\n1 10\n1 10\n2 20\n3 30\n4 40\n5 50",
};

vector<string> outputs = {
	"45",
	"55",
	"20",
	"90",
};

string q14501_solve(stringstream* input) {
	int N;
	vector<int> T;
	vector<int> P;

	int tmp;
	vector<map<int, double>> indextree;
	vector<double> values;
	vector<bool> visit;
	stack<int> A;

	long result;

	(*input) >> N;
	for (int i = 0; i < N; i++) {
		(*input) >> tmp;
		T.push_back(tmp);
		(*input) >> tmp;
		P.push_back(tmp);

		values.push_back((double)P[i] / T[i]);
		visit.push_back(false);
	}

	for (int x = 0; x < N; x++) {
		//map<int, double>
		for (int i = x + 1; i < N;) {

		}
		indextree.push_back()
	}

	for (int x = 0; x < N; x++) {
		for (int i = x + 1; i < N;) {
			// 방문 하지 않음
			if (!visit[i]) {
				A.push(i);
				visit[i] = true;

				// 걸리는 시간 만큼 건너 뛰기
				i = T[i] - 1;
			}
		}
	}
	

	return to_string(result);
}