#include <iostream>
#include <string>
#include <cmath>

int sumString(const std::string& str) {
	int result = 0;

	for (char ch : str) {
		int converted = ch - '0';

		result += converted;
	}

	return result;
}
