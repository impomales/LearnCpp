#include <iostream>		// import io lib
#include <string>
using namespace std;	// allows to write cout
						// instead of std::cout

void printNameAge(string name, int age) {
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
	return 0;
}