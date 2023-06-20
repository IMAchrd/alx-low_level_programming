#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * description - print_alphabet used on the _putchar to print alphabet
 *
 * Return: Always 0
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
