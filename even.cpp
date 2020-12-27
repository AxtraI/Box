#include <iostream>
#include <stdio.h>
#include <math.h>
#include <locale.h>

using namespace std;

double odd(double x, double(*f)(double))
{
	return f(x) + f(-x);
}
double even(double x, double(*f)(double))
{
	return f(x) - f(-x);
}
void check(double(*f)(double), const char *name)
{
	double x = 0., step = 0.1, max = 5.0, epsilon = 1E-10;
	int isOdd = 1, isEven = 1;

	while (x <= max)
	{
		if (f(x)> epsilon)
		{
			if (fabs(odd(x, f)) < epsilon)
				isEven *= 0;
			else if (fabs(even(x, f)) < epsilon)
				isOdd *= 0;
			else
			{
				isEven *= 0;
				isOdd *= 0;
			}
		}
		x += step;
	}
	
	if (isOdd)
		printf("\nФункция %s(x) - нечетная", name);
	else if(isEven)
		printf("\nФункция %s(x) - четная", name);
	else
		printf("\nФункция %s(x) - ни четная, ни нечетная", name);
}

double pow4(double x)
{
	return x*x*x*x;
}

double myFunction(double x)
{
	return cos(138 * x) / sin(34 * x + 155);
}


int main(void){
	int a;
	setlocale(LC_ALL, "Russian");
	double(*func)(double);
	func = tan;
	check(func, "tg");

	func = sin;
	check(func, "sin");

	func = cos;
	check(func, "cos");

	func = exp;
	check(func, "exp");
	func = pow4;
	check(func, "x^4");

	func = myFunction;
	check(func, "myFunction");

	cin >> a;
	return 0;
}