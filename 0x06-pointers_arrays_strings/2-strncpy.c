#include "main.h"

/**
 * _stncopy - copy a string.
 * @dest: input value.
 * @src: input value.
 * @n: he maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_stncopy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
