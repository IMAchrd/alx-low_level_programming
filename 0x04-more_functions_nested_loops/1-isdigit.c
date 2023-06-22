#include "main.h"

/**
 * _isdigit -  check a digit(0 through 9)
 *
 * @c: Variable
 *
 * Return: Always 0
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
