#include "q14501.h"

long q14501::dfs(vector<int> P, vector<int> T, int index, vector<vector<int>> indextree) {
	int maxIndex = -1;
	int count = 0;
	long result;
	if (P.size() <= index || (indextree[index].size() == 0 && T[index] + index > indextree.size())) return 0;
	result = P[index];
	for (auto iter = indextree[index].begin(); iter != indextree[index].end(); iter++) {
		if (count <= indextree[*iter].size()) {
			count = indextree[*iter].size();
			maxIndex = *iter;
		}
	}
	if(maxIndex >= 0)
		result += dfs(P, T, maxIndex, indextree);
	return result;
}

string q14501::solve(stringstream* input) {
	int N;
	vector<int> T;
	vector<int> P;

	int tmp;
	vector<vector<int>> indextree;
	vector<bool> visit;
	stack<int> A;

	long result = 0;

	(*input) >> N;
	for (int i = 0; i < N; i++) {
		(*input) >> tmp;
		T.push_back(tmp);
		(*input) >> tmp;
		P.push_back(tmp);

		visit.push_back(false);
	}

	for (int x = 0; x < N; x++) {
		vector<int> tree;
		int i = x + T[x];
		for (; i < N;i++) {
			tree.push_back(i);
		}
		indextree.push_back(tree);
	}

	for (int x = 0; x < indextree.size(); x++) {
		long cal = dfs(P, T, x, indextree);
		if (result < cal) result = cal;
	}

	return to_string(result);
}