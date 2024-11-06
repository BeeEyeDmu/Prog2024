#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 구조체 정의
struct ProductInfo {
	int num;		// 상품번호
	char name[100];	// 상품명
	int cost;		// 가격
};

void swap(ProductInfo a, ProductInfo b);	// 값에 의한 호출
void swap2(ProductInfo* a, ProductInfo* b);	// 주소에 의한 호출

int main()
{
	ProductInfo x;

	x.num = 1001;	
	//strcpy_s(x.name, sizeof(x.name), "제주 한라봉");
	strcpy(x.name, "제주 한라봉");
	x.cost = 20000; 

	ProductInfo y = { 1002, "성주 꿀참외", 15000 };

	printf("%d %15s %7d\n", x.num, x.name, x.cost);
	printf("%d %15s %7d\n", y.num, y.name, y.cost);

	ProductInfo z = x;

	//z = x;

	printf("%d %15s %7d\n", z.num, z.name, z.cost);

	printf("%d\n", sizeof(x));
	printf("%d\n", &x);
	printf("%d\n", &x.num);
	printf("%d\n", &x.name);
	printf("%d\n", &x.cost);

	ProductInfo a = { 1003, "대전 성심당빵", 3500 };
	ProductInfo* p;
	 
	// 구조체 포인터로 멤버를 사용하기 (-> 사용)
	p = &a;
	printf("%d %15s %7d\n", a.num, a.name, a.cost);
	printf("%d %15s %7d\n", (*p).num, (*p).name, (*p).cost);
	printf("%d %15s %7d\n", p->num, p->name, p->cost);

	// 1001(x)번과 1003(a)번 상품을 바꾸자
	swap(x, a);
	printf("x: %d %-15s %7d\n", x.num, x.name, x.cost);
	printf("a: %d %-15s %7d\n", a.num, a.name, a.cost);

	swap2(&x, &a);
	printf("x: %d %-15s %7d\n", x.num, x.name, x.cost);
	printf("a: %d %-15s %7d\n", a.num, a.name, a.cost);
}

void swap2(ProductInfo *a, ProductInfo *b)
{
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap(ProductInfo a, ProductInfo b)
{
	ProductInfo tmp = a;
	a = b;
	b = tmp;
}