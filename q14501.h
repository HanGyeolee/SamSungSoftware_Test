#pragma once

#include "basic.h"
#include <stack>
#include <map>
#include <queue>

#define TIME_LIMIT 2000 //ms

class q14501 :public Question {
public:
	q14501() {
		inputs = {
		"7\n3 10\n5 20\n1 10\n1 20\n2 15\n4 40\n2 200",
		"10\n1 1\n1 2\n1 3\n1 4\n1 5\n1 6\n1 7\n1 8\n1 9\n1 10",
		"10\n5 10\n5 9\n5 8\n5 7\n5 6\n5 10\n5 9\n5 8\n5 7\n5 6",
		"10\n5 50\n4 40\n3 30\n2 20\n1 10\n1 10\n2 20\n3 30\n4 40\n5 50",
		};
		outputs = {
			"45",
			"55",
			"20",
			"90",
		};
	}

	virtual string solve(stringstream* input);
private:
	virtual long dfs(vector<int> P, vector<int> T, int index, vector<vector<int>> indextree);
};
