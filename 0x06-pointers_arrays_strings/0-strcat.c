#include "main.h"

/**
 * _strcat - appends the src string to the dest string.
 * null byte, to the end of the string pointed to by @dest.
 * @dest: input value.
 * @src: input value.
 *
 * Return: Void.
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int n;

	k = 0;
	while ((dest[k] = '\0'))
	{
		k++;
	}
	n = 0;
	while ((src[n] = '\0'))
	{
		dest[k] = src[n];
		k++;
		n++;
	}
	dest[k] = '\0';
	return (dest);
}
