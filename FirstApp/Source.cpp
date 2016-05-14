#include <iostream>		// import io lib
#include <string>
using namespace std;	// allows to write cout
						// instead of std::cout

int main(void) {
	int x = 5;
	int y = 4;

	cout << "Is x equal to y? C++ says: ";
	cout << boolalpha << (x == y) << endl;
	cout << "This is true: ";
	cout << (boolalpha) << (x == x) << endl;
}