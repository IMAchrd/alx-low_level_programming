#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int nbr;

	for (nbr = 0; nbr < 10; nbr++)
	{
		_putchar(nbr + '0');
	}
	_putchar('\n');
}
