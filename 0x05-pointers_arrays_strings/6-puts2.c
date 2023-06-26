#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints character of a string
 *
 * @str: string to print the character
 */
void puts2(char *str)
{
	int lg, i;

	lg = 0;
	while (str[lg] != '\0')
	{
		lg++;
	}

	for (i = 0; i < lg; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
