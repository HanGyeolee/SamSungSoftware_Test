#pragma once

#include "basic.h"

#define TIME_LIMIT 2000 //ms

class q13458 :public Question {
public:
	q13458() {
		inputs = {
			"1\n1\n1 1",
			"3\n3 4 5\n2 2",
			"5\n1000000 1000000 1000000 1000000 1000000\n5 7",
			"5\n10 9 10 9 10\n7 20",
			"5\n10 9 10 9 10\n7 2",
			"2\n1000000 1\n999999 1",
			"3\n3 4 5\n3 1",
		};
		outputs = {
			"1",
			"7",
			"714290",
			"10",
			"13",
			"3",
			"6",
		};
	}

	virtual string solve(stringstream* input);
};