#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
