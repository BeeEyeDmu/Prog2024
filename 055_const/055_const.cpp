#include <stdio.h>
#define PI 3.141592
//const double PI = 3.141592;

double getArea(double r) {
	return PI * r * r;
}

int main()
{	
	printf("%f\n", getArea(10));
}