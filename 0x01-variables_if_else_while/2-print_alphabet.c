#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	char ph;

	ph = 'a';
	while (ph <= 'z')
	{
		putchar(ph);
		ph++;
	}
		putchar('\n');

	return (0);
}
