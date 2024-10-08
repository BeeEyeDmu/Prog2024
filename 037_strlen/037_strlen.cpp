#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char s[] = "hello";
	int len = strlen(s);

	printf("배열의 칸수 : %d\n", (int)sizeof(s));
	printf("문자열의 길이 : %d\n", len);

	char s1[] = "hello";
	char s2[100];

	strcpy(s2, s1);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);

	// 문자열 상수를 복사할 수 있다
	strcpy(s2, "Konyang University"); 
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);

	char greeting[10] = "Hello, ";
	char name[100];

	printf("이름 입력 : ");
	scanf("%s", name);

	int x = sizeof(greeting) - strlen(greeting) - 1;
	strncat(greeting, name, x);

	//strcat(greeting, "!");

	printf("%s\n", greeting);

	// 주의할 점! 문자배열은 반드시 '\0'로 끝나있어야 한다
	char str[10] = "";
	strcat(str, "Hello");
	printf("%s\n", str);

	char str1[] = "tample";
	char str2[] = "simple";

	printf("%d\n", strcmp(str1, str2));
}
