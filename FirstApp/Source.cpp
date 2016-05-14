#include <iostream>		// import io lib
#include <string>		// use string var
using namespace std;	// allows to write cout
						// instead of std::cout

struct Player
{
	int hp;
	int mp;
	char initialFirst;
	char initialLast;
	string name;
};

int main(void) {
	Player isaias;
	isaias.hp = 500, isaias.mp = 300;
	isaias.initialFirst = 'I';
	isaias.initialLast = 'P';
	isaias.name = "Isaias";
	cout << "Hello, world" << endl;
	cout << "I am programming in C++." << endl;
	cout << "Status: " << endl;
	cout << "\thp: " << isaias.hp << endl;
	cout << "\tmp: " << isaias.mp << endl;
	cout << "\tinitials: " << isaias.initialFirst;
	cout << isaias.initialLast << endl;
	cout << "\tname: " << isaias.name << endl;
	return 0;
}