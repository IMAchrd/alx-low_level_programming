#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 5)
			printf("Buzz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
