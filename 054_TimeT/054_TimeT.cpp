#include <stdio.h>

struct Time {
	int h, m, s;
};

int totalSec(Time t) {
	return t.h * 3600 + t.m * 60 + t.s;
}

int totalSecP(Time *t) {
	return t->h * 3600 + t->m * 60 + t->s;
}

int main()
{
	Time t = { 1, 22, 48 };

	printf("%d\n", totalSec(t));
	printf("%d\n", totalSecP(&t));
}