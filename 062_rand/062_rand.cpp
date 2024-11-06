#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	for (int i = 1; i <= 10; i++)
		printf("%d\n", rand()%6+1);
} 