#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @c: test
 *
 * Return: Always 0
*/
int print_last_digit(int c)
{

	int i;

	if (c < 0)
		i = (c % 10) * (-1);
	else
		i = c % 10;

	_putchar(i + '0');
	return (i);
}
