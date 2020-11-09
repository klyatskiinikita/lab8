#include <iostream>
#include <iomanip>
#include "func.h"
#define _USE_MATH_DEFINES
#include "math.h"

using namespace std;

//realization
//12.1
double equation1(double x, double y, double z)
{
	double result1;
	if (pow(y, 2) != 0 && (x + y) >= 0 && x != 0)
	{
		result1 = (-4) * z * (pow((sqrt(x + y) / pow(y, 2)), 1 / 3) - fabs(3 * y + 5 * pow(x, (-1)))) + exp(3);
		return result1;
	}
}
double equation2(double x, double y, double z, double a)
{
	double result2;
	if (sqrt(pow(x, 2) + a - pow(y, 2) * pow(sin(x + z), 3) / x) >= 0 && x != 0)
	{
		result2 = (sqrt(pow(x, 2) + a - pow(y, 2) * pow(sin(x + z), 3) / x) + sin(M_PI / 180 * 27));
		return result2;
	}
}
int equation3(int a)
{
	int result3 = 0;
	for (a; a != 0; a /= 10)
	{
		result3 += a % 10;
	}
	return result3;
}

//result1 = (-4) * z * (pow((sqrt(x + y) / pow(y, 2)), 1 / 3) - fabs(3 * y + 5 * pow(x, (-1)))) + exp(3);
//pow((sqrt(x + y) / pow(y, 2)), 1 / 3)
//fabs(3 * y + 5 * pow(x, (-1)))
//fabs(3 * y + 5 / x)

//result2 = (sqrt(pow(x, 2) + a - pow(y, 2) * pow(sin(x + z), 3) / x) + sin(M_PI / 180 * 27));