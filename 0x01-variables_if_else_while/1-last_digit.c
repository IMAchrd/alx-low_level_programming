#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dig = n % 10;

	if (dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, dig);
	else if (dig < 6 && dig != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dig);
	else
		printf("Last digit of %d is %d and is 0\n", n, dig);
	return (0);
}