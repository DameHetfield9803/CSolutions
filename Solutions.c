#include <stdio.h>
#include <math.h>
double myPow(double x, int n) {
	return pow(x, n);
}

int main() 
{
	myPow(2.00000, 10);
	myPow(2.1,3);
	myPow(2.0000,-2);
}