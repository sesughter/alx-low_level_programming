#include <stdio.h>
/**
  * main - Entry Point
  * Return: 0
  */
int main(void)
{
	int lw = 'a';

	while (lw <= 'z')
	{
		putchar(lw);
		lw += 1;
	}
	putchar('\n');
	return (0);
}


