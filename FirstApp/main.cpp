#include <iostream>
#include <cstdint>		// used for standardized ints.
#include "Math.h"

int main() 
{
	using namespace std;
	
	double x, y;
	char symbol;
	cout << "Enter a double value: ";
	cin >> x;
	cout << "Enter a second double value: ";
	cin >> y;
	cout << "Enter one of the following: +, -, *, or /: ";
	cin >> symbol;

	if (symbol == '+') 
	{
		cout << x << " + " << y << " is " << x + y << endl;
	}
	if (symbol == '-') 
	{
		cout << x << " - " << y << " is " << x - y << endl;
	}
	if (symbol == '*')
	{
		cout << x << " * " << y << " is " << x * y << endl;
	}
	if (symbol == '/')
	{
		cout << x << " / " << y << " is " << x / y << endl;
	}

	double height;
	cout << "Enter the initial height: ";
	cin >> height;
	for (int i = 0; i <= 5; i++)
	{
		cout << "At " << i << " seconds, the ball is at height: ";
		cout << heightOfBall(height, i) << " meters" << endl;
	}

	return 0;
}