// 1. 별표를 n개 출력한다
// 2. 1부터 n까지 홀수를 출력한다
// 3. 1부터 n까지 자연수를 모두 더한다
#include <stdio.h>

int main()
{
	int n;

	printf("n을 입력 : ");
	scanf_s("%d", &n);

	// while 문(1)
	int i = 1;

	while (i <= n)
	{
		printf("*");
		i++;
	}
	printf("\n");

	// while 문(2)
	i = 1;

	while (i <= n) {
		printf("%d ", i);
		i += 2;
	}
	printf("\n");

	// while 문(3) 1부터 n까지 자연수를 모두 더한다
	int sum = 0;
	i = 1;

	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("sum = %d\n", sum);
	
	 
	// do - while 문

	// for 문

}