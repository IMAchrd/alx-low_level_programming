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
		if (ph == 'e' || ph == 'q')
			ph++;
		putchar(ph);
		ph++;
	}
	putchar('\n');

	return (0);
}
