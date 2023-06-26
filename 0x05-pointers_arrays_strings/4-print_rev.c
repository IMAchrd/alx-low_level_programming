#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: variable
 */
void print_rev(char *s)
{
	int a, b, length;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	length = a;

	for (b = length - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
