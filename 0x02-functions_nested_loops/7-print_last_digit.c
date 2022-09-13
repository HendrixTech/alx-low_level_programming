#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: digit of last digit
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int i, j;

	i = n % 10;
	if (i < 0)
		i = -i;
	j = '0' + i;
	_putchar(j);
	return (i);
}
