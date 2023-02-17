#include <stdio.h>
/**
 * main - A program that prints the sizes of various computer sizes
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %d. byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %d. byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %d. byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %d. byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float int: %d. byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
