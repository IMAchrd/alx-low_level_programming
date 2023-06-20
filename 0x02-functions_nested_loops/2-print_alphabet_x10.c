#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets 10 times
*/
void print_alphabet_x10(void)
{
	int i;
	char ph;

	for (i = 0; i < 10; ++i)
	{
		for (ph = 'a'; ph <= 'z'; ph++)
		{
			_putchar(ph);
		}
		_putchar('\n');
	}
}
