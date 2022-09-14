#include <stdio.h>
void printstring()
{
	printf("_putchar\n");
}

void print_alphabet()
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
}

