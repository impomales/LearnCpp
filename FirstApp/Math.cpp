#include "Math.h"
#include <cmath>

double heightOfBall(double height, int seconds)
{
	using namespace constants;
	height = height - gravity * (pow(seconds, 2))/2;
	return (height > 0) ? height : 0;
}