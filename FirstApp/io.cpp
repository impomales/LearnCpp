#ifndef IO
#define IO
#include "io.h"
#endif

int readNumber() {
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	return number;
}

void writeAnswer(int result) {
	std::cout << "result: " << result << std::endl;
}