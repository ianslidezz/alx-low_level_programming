#include "main.h"

/**
 * _stncopy - copy a string.
 * @dest: input value.
 * @src: input value.
 * @n: he maximum number of bytes to copied from src.
 *
 * Return: dest
 */

char *_stncopy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	return (dest);
}
