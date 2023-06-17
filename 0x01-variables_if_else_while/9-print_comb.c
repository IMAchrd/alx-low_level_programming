#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int nbr;

	nbr = 0;
	while (nbr <= 9)
	{
		putchar(nbr + '0');
		if (nbr != 9)
		{
			putchar(',');
			putchar(' ');
		}
		nbr++;
	}
	putchar('\n');
	return (0);
}
