#include <stdio.h>

int main()
{
	char ch;

	//ch = getchar();
	//putchar(ch);

	while (true) {
		ch = getchar();
		if (ch == '\n')
			break;
		putchar(ch);
	}
}