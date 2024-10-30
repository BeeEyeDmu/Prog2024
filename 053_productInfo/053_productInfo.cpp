#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 구조체 정의
struct ProductInfo {
	int num;		// 상품번호
	char name[20];	// 상품명
	int cost;		// 가격
};

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
}