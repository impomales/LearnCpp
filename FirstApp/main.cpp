#include <iostream>
#include <cstdint>		// used for standardized ints.

int main() {
	using namespace std;
	// fundamental data types.
	bool	bVal = true;	// copy init.
	char	cVal('a');		// direct init is better.
	int		nVal(23);
	float	fVal(3.4f);		// f suffix indicates float.
	double	dVal(5.345);	// by default double

	// uniform init. C++11 feature.
	int value{ 5 };			// works with all data types i.e. arrays, lists, etc.
	int n{};				// inits with default 0.

	/* int val {4.5} would throw an error. */

	// proper style: define function as close to first use as possible.
	// sizeof determines size of data.
	cout << sizeof(double) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(bool) << endl;
	cout << sizeof(int32_t) << endl;
	cin >> bVal;
	// 0 is false, all non-zero ints resolve to true.
	if (bVal)
		cout << "this is true" << endl;
	else
		cout << "this is false" << endl;
	// static cast, char to int
	cout << static_cast<int>(cVal) << endl;
	// dont use magic numbers. ex. val = val * 25...the 25 doesn't have a clear meaning.
	// next will be consts, etc. 
	return 0;
}