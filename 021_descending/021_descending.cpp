﻿#include <stdio.h>

int main()
{
	int a, b, c;

	printf("숫자 세개 입력 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	//if (a > b) {
	//	if (b > c) {
	//		printf("%d %d %d\n", a, b, c);
	//	}
	//	else {
	//		if (a > c) {
	//			printf("%d %d %d\n", a, c, b);
	//		}
	//		else {
	//			printf("%d %d %d\n", c, a, b);
	//		}
	//	}
	//}
	//else {  // a < b
	//	if (a > c) {
	//		printf("%d %d %d\n", b, a, c);
	//	}
	//	else {
	//		if (b > c) {
	//			printf("%d %d %d\n", b, c, a);
	//		}
	//		else {
	//			printf("%d %d %d\n", c, b, a);
	//		}
	//	}
	//}
	
	if (a > b) {
		if (b > c)		printf("%d %d %d\n", a, b, c);
		else if(a > c)	printf("%d %d %d\n", a, c, b);
		else			printf("%d %d %d\n", c, a, b);
	}
	else {
		if( a >c )		printf("%d %d %d\n", b, a, c);
		else if(b > c)	printf("%d %d %d\n", b, c, a);
		else			printf("%d %d %d\n", c, b, a);
	}
}