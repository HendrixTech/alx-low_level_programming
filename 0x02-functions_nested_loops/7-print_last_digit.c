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
		i = -1;
	j = '0' + 1;
	_putchar(j);
	return (1);
}
