#include "main.h"

/**
 * *_strcpy - copies the string pointed
 *
 * @dest: a pointer
 * @src: variable
 *
 * Return: not 0
 */
char *_strcpy(char *dest, char *src)
{
	int a, length;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (a = 0; a < length; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
