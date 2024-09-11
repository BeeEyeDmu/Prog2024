#include <stdio.h>
#include <stdlib.h>

int main()
{
	int choice;

	do {
		printf("1. 새 게임\n");
		printf("2. 불러오기\n");
		printf("3. 설정\n");
		printf("4. 크레딧\n");
		printf("5. 종료\n");
		printf("메뉴를 선택 하시오 : ");

		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			printf(" => 새 게임\n");	break;
		case 2:
			printf(" => 불러오기\n"); break;
		case 3:
			printf(" => 설정\n"); break;
		case 4:
			printf(" => 크레딧\n");	break;
		case 5:
			printf(" => 종료\n");	break;
		default:
			printf("잘못 입력하셨습니다.\n");	break;
		}
	} while (choice != 5);

}