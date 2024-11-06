#include <stdio.h>

enum color { Red, Green, Blue};

int main()
{
	color x, y;

	x = Red;
	y = Blue;

	printf("%d %d\n", x, y);

	if (x == Red)
		printf("Red\n");

}