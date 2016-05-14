#include <iostream>		// import io lib
#include <string>
using namespace std;	// allows to write cout
						// instead of std::cout

int main(void) {
	string name;
	int age;

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;

	printf("Name: %s\nAge: %d\n", name.c_str(), age);
	return 0;
}