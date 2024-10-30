#include <stdio.h>

int a = 10;

void aaa()
{
	printf("in aaa: a = %d\n", a);
}

void bbb()
{
	int a = 20;

	printf("in bbb: a = %d\n", a);
}

int main()
{
	aaa();
	bbb();
}