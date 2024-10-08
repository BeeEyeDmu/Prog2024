#include<stdio.h>

int main()
{
	int a = 10;
	int* ptr;
	ptr = &a;

	printf("%p = %p = %d\n", &a, ptr, a);

	*ptr = 20;  // a = 20;
	printf("%p = %p = %d\n", &a, ptr, a);

}