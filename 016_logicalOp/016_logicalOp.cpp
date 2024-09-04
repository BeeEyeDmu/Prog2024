#include<stdio.h>

int main()
{
	int a = 3;

	bool p = a >= 1 && a <= 10;
	bool q = a == 3 || a == 7;
	bool r = !q;

	printf("%d %d %d\n", p, q, r);
}