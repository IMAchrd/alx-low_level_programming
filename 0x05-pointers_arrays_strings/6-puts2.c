#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints character of a string
 *
 * @str: string to print the character
 */
void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		printf("%c", str[x]);
		x += 2;
	}
	printf("\n");
}
