#include <iostream>		// import io lib
#include <string>
#include "Header.h"
using namespace std;	// allows to write cout
						// instead of std::cout

// function declaration.
void printNameAge(string name, int age);

void printNameAge(string name, int age) 
{
	printf("Name: %s\n Age: %d\n", name.c_str(), age);
}

int doubleNumber(int x) 
{
	return x * 2;
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
	return 0;
}