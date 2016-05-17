#ifndef IO
#define IO
#include "io.h"
#endif

int main() {
	int x = readNumber();
	int y = readNumber();
	writeAnswer(x + y);
	return 0;
}