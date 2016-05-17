int main() {
	// fundamental data types.
	bool	bVal = true;	// copy init.
	char	cVal('a');		// direct init is better.
	int		nVal(23);
	float	fVal(3.4);
	double	dVal(5.345);

	// uniform init. C++11 feature.
	int value{ 5 };			// works with all data types i.e. arrays, lists, etc.
	int n{};				// inits with default 0.

	/* int val {4.5} would throw an error. */

	// proper style: define function as close to first use as possible.

	return 0;
}