#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 *
 * @a: an array
 * @n: the number of elements of the array
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
		printf("\n");
}
