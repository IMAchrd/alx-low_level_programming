#include <unistd.h>
#include <main.h>

/**
 * main - Enrty point
 *
 * Return: On success 1.
 */

int main(void)
{
	char array[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(array[i]);
	_putchar('\n');

	return (0);
}
