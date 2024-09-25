#include<stdio.h>

int main()
{
	int a[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}

	int b[2][3] = { {1,2,3}, {4,5,6} };
	int c[2][3] = { 1,2,3,4,5,6 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%3d ", b[i][j]);
		printf("\n");
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%3d ", c[i][j]);
		printf("\n");
	}

	int t[2][3][4] = { {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}, 
		{{13,14,15,16}, {17,18,19,20}, {21,22,23,24}} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++)
				printf("%4d", t[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}
}