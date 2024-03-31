#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <ctime>
using namespace std;

class Question {
public:
	vector<string> inputs;
	vector<string> outputs;

	virtual string solve(stringstream* input) {
		return "";
	}
};