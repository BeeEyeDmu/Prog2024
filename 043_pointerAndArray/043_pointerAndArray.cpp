#include <stdio.h>

int main() 
{
	//  10개 짜리 정수배열 선언
	int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	// 정수형 포인터 선언
	int* p;

	p = a;
	printf("%d\n", *p);
	printf("%d %d\n", *(p+1), *p+1);

	printf("%p %p %p %p\n", a, &a[0], p + 1, &a[1]);
	printf("%p %p %p %p\n", p, &p[0], a + 1, &p[1]);

	*p = 3.14;
	printf("%d\n", *p);

	double x = 3.14;
	double* d;
	d = &x;

	printf("%f, %f, %p, %p\n", x, *d, &x, d);

}