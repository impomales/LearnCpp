#include <iostream>		// import io lib
#include <string>
#include "math.h"

// step into: executes next line of code.
// if function call, steps into the function.
// step over: executes all code in function.
// step out: executes remaining code in current function.
// run to cursor: executes up until cursor.
// watch window: see values of variables changes as you step.

using namespace std;	// allows to write cout
						// instead of std::cout

// function declaration.
void printNameAge(string name, int age);

void printNameAge(string name, int age) 
{
	printf("Name: %s\n Age: %d\n", name.c_str(), age);
}



int main(void) {
	string name;
	int age;

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;

	printNameAge(name, age);
	cout << add(age, doubleNumber(age)) << endl;

	age++;
	age += 2;
	age += 4;
	age = doubleNumber(age);

#ifdef PI
	std::cout << PI << endl;
#endif
	return 0;
}