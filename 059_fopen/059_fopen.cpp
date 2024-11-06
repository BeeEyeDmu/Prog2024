#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* in;
	FILE* out;

	//fopen_s(&in, "input.txt", "r");	
	in = fopen("input.txt", "r");
	if (in == NULL) {
		printf("input1.txt가 없습니다.\n");
		exit(1);
	}

	out = fopen("output.txt", "a");

	int n;

	//fscanf_s(in, "%d", &n);
	fscanf(in, "%d", &n);
	fprintf(out, "%d %d\n", n, n*n);
	printf("%d\n", n);

	fclose(in);
	fclose(out);
}