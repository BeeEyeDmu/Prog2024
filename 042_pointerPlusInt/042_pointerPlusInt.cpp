#include <stdio.h>

int main()
{
	int a = 10;
	int* ptr = &a;

	printf("ptr = %p\n", ptr);
	printf("ptr+1 = %p\n", ptr + 1);
	printf("ptr+2 = %p\n", ptr + 2);
}