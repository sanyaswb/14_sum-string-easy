#include "test.h"
#include "../index.h"
#include "termcolor.hpp"

#include <iostream>
#include <string>

using namespace std;

string boolString(bool value) {
	return value ? "true" : "false";
}

struct Option {
		int toBe;
		std::string str;
};

Option options[] = {
		{
				15,
				"12345"
		},
		{
				37,
				"964715230"
		},
		{
				10,
				"3241"
		},
		{
				23,
				"632462"
		},
		{
				20,
				"53435"
		},
		{
				22,
				"23467"
		}
};

void printGreen(const string& test, const string& result) {
	cout << termcolor::green << "TEST " << "\"" << test << "\"" << " PASSED! RESULT: " << result << endl;
}

void printRed(const string& test, const string& expected, const string& result) {
	cout << termcolor::red << "TEST " << "\"" << test << "\"" << " FAILED! EXPECTED: \"" << expected << "\" INSTEAD OF " << result << "!" << endl;
}

void test() {
	cout << endl;

	int optionsLength = sizeof(options) / sizeof(options[0]);

	for (int i = 0; i < optionsLength; i++) {
		Option option = options[i];

		int result = sumString(option.str);

		string testStr = option.str;

		if (result == option.toBe) {
			printGreen(testStr, to_string(result));
		} else {
			printRed(testStr, to_string(option.toBe), to_string(result));
		}

		cout << endl;
	}
}