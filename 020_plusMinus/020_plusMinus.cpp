#include <stdio.h>

int main()
{
	int n;

	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	if (n > 0)
		printf("양수\n");
	else if (n == 0)
		printf("0\n");
	else
		printf("음수\n");
}