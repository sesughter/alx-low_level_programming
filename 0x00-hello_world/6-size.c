#include <stdio.h>
/**
  * main - Entry point
  *Return: Alaways 0 (Success)
  */
int main(void)
{
	printf("size of a char: %li byte(s)",
		sizeof(char));
	printf("size of an int: %li byte(s)",
		sizeof(int));
	printf("size of a long int: %li byte(s)",
		sizeof(long int));
	printf("size of a long long int: %li byte(s)",
		sizeof(long long int));
	printf("size of a float: %li bytes(s)",
		sizeof(float));

	return (0);
}

