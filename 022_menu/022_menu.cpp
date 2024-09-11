#include <stdio.h>

int main()
{
	int choice;

	printf("1. 새 게임\n");
	printf("2. 불러오기\n");
	printf("3. 설정\n");
	printf("4. 크레딧\n");
	printf("메뉴를 선택 하시오 : ");

	scanf_s("%d", &choice);

	if (choice == 1)
		printf("새 게임\n");
	else if (choice == 2)
		printf("불러오기\n");
	else if (choice == 3)
		printf("설정\n");
	else if (choice == 4)
		printf("크레딧\n");
	else
		printf("잘못 입력하셨습니다.\n");
}