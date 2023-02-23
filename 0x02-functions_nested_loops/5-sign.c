#include "main.h"

/**
 * print_sign - prints the sign of a number .
 * @n: the int to check
 * Return: 1 for positive int, -1 for negative int or zero for any thing else
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
