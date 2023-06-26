#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: variable
 */
void puts_half(char *str)
{
	int length, j, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (length % 2)
	{
		for (j = (length - 1) / 2; j < length - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
