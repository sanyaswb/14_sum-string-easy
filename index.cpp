#include <iostream>
#include <string>
#include <cmath>

int sumString(const std::string& str) {
	int sum = 0;
	for (int i = 0; i < str.length(); i++){
		int code = int(str[i] - '0');
		sum += code;
	}
	return sum;
}


