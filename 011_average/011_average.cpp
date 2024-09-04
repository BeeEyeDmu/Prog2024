#include <stdio.h>

int main()
{
	int math = 95;
	int eng = 97;
	int kor = 88;

	int sum = math + eng + kor;
	double avg = (double)(sum / 3);  // 정수/정수 -> 정수

	printf("평균 : %f\n", avg);
}