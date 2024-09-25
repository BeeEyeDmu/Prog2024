#include <stdio.h>

int main()
{
	// C언어에서 문자열을 문자배열에 저장한다
	// C언어에 string 타입이 없다
	char s[] = "Hello, World!";	// 크기가 최소한 14개짜리 배열

	printf("%s\n", s);

	char t[6] = { 'h', 'e', 'l', 'l', 'o', '\0'};
	printf("%s\n", t);

	char name[20];

	printf("이름 입력 : ");
	scanf_s("%s", name, 20);	// VS에서는 문자열 입력받을때
								// 문자열의 길이를 쓰게 했다
	//	scanf("%s", name);
	printf("%s\n", name);

}