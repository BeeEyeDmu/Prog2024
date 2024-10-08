#include <stdio.h>

int main() 
{
	int arr[100] = { 0 };
	int n;

	printf("몇 개의 숫자를 입력할 것인가:");
	scanf_s("%d", &n);

	int max = arr[0];

	for (int i = 0; i < n; i++) {
		printf("저장할 숫자를 입력하시오:");
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	printf("가장 큰 값은 : %d", max);
}