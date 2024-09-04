#include <stdio.h>

int main()
{
	printf("sizeof char = %d\n", sizeof(char));
	printf("sizeof short = %d\n", sizeof(short));
	printf("sizeof long = %d\n", sizeof(long));
	printf("sizeof int = %d\n", sizeof(unsigned int));	
	printf("sizeof long long = %d\n", sizeof(long long));

	printf("sizeof float = %d\n", sizeof(float));
	printf("sizeof double = %d\n", sizeof(double));

	char c;
	short s;
	long l;
	int i;
	long long ll;
	float f;
	double d;

	printf("sizeof char = %d\n", sizeof(c));
	printf("sizeof short = %d\n", sizeof(s));
	printf("sizeof long = %d\n", sizeof(l));
	printf("sizeof int = %d\n", sizeof(i));
	printf("sizeof long long = %d\n", sizeof(ll));

	printf("sizeof float = %d\n", sizeof(f));
	printf("sizeof double = %d\n", sizeof(d));
}
