#include "Math.h"

double heightOfBall(double height, int seconds)
{
	using namespace constants;
	height = height - gravity * (seconds * seconds)/2;
	return (height > 0) ? height : 0;
}