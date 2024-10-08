#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;

	int* ptr = &a;
	printf("%p = %d\n", ptr, *ptr);

	ptr = &b;
	printf("%p = %d\n", ptr, *ptr);

}