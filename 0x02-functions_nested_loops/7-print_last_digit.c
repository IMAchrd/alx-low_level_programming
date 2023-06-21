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

	int i = c % 10;

	if (c < 0)
		c = c * (-1);
	_putchar(i + '0');
	return (i);
}
