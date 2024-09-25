#include <stdio.h>

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	for(int i=n; i>=1; i--)
		printf("%d ", i);
	printf("\n");
	//for ( ; n >= 1; n--)
	//	printf("%d ", n);
	//printf("\n");

	// 2의 n제곱
	int pow, i;

	//for (int i = 1; i <= n; i++)
	//	pow *= 2;
	for (i = 1, pow = 1; i <= n; i++, pow *= 2)
		;
	printf("%d\n", pow);
}