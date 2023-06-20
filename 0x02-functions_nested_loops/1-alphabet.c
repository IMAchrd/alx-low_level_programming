#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * description - print_alphabet used on the _putchar to print alphabet
 *
 * Return: Always 0.
 */
int main(void)
{
	void print_alphabet(void)
	{
		int i;

		for (i = 'i'; i <= 'z'; i++)
			_putchr(i);
		putchar('\n');
	}
	return (0);
}
