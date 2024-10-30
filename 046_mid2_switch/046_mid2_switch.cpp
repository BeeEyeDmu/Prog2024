#include<stdio.h>

int main()
{
	int score;

	printf("점수입력 : ");
	scanf_s("%d", &score);

	// 점수에 따른 학점을 출력
	switch (score/5)  // 정수 또는 문자
	{
	case 20:
	case 19:
		printf("A+\n");
		break;
	case 18:
		printf("A0\n");
		break;
	case 17:
		printf("B+\n");
		break;
	
	default:
		printf("F\n");
		break;
	}

	//if (score >= 90)
	//	printf("A\n");
	//else if (score >= 80)
	//	printf("B\n");
}