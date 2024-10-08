#include <stdio.h>

int main()
{
	int a = 10;
	int* ptr = &a;
	int** pptr = &ptr;	// double pointer

	printf("1. a = %d\n", a);
	printf("2. &a = %p\n", &a);
	printf("3. ptr = %p\n", ptr);	// 2번 3번은 같은 값
	printf("4. &ptr = %p\n", &ptr);
	printf("5. pptr = %p\n", pptr); // 4번 5번은 같은 값
	printf("6. *pptr = %p\n", *pptr); // 2번과 같은 값
	printf("7. **pptr = %d\n", **pptr); // 1번과 같은 값
}