#include <stdio.h>
#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @c: test
 *
 * Return: Always 0
*/
int _abs(int c)
{
	if (c < 0)
		c = c * (-1);
	return (c);
}
