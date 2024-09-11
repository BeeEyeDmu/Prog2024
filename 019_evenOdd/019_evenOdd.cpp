#include <stdio.h>

int main()
{
	int x;

	printf("숫자를 입력 : ");
	scanf_s("%d", &x);

	// Ctrl-KC (Comment)
	// Ctrl-KU (Uncomment)
	
	//if (x % 2 == 0)
	//	printf("%d는 짝수입니다.", x);
	//if (x % 2 == 1)
	//	printf("%d는 홀수입니다.", x);

	if (x % 2 == 0) {
		printf("%d는 짝수입니다.\n", x); 
		printf("ㅎㅎㅎ\n");
	}
	else {
		printf("%d는 홀수입니다.\n", x);
		printf("ㅋㅋㅋ\n");
	}
}