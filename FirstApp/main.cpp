#include <iostream>
#include <string>

int main()
{
	using namespace std;

	enum Color
	{
		COLOR_RED,
		COLOR_GREEN,
		COLOR_BLUE
	};

	string myName;
	cout << "Enter your full name: ";
	getline(cin, myName);

	int age;
	cout << "Enter the age: ";
	cin >> age;
	cin.ignore(32767, '\n');

	cout << "my name is " << myName << endl;
	cout << "i'm " << age << " years old. " << endl;
	cout << "there are " << myName.length() << " characters in my name." << endl;
	return 0;
}