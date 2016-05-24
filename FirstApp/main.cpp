#include <iostream>
#include <string>

struct Employee
{
	short id;
	int age;
	double wage;
};

int main()
{
	using namespace std;

	Employee isaias;
	isaias.age = 27;
	isaias.wage = 7.75;
	isaias.id = 1;

	Employee mark { 2, 45, 13 };
	cout << "age: " << isaias.age << endl;
	cout << "id: " << mark.id << endl;

	return 0;
}