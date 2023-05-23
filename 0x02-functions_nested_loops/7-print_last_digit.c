#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: argument
 *
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		j = -1 * (i % 10);
		_putchar(j + '0');
		return (j);
	}
	else
	{
		j = i % 10;
		_putchar(j + '0');
		return (j);
	}
}
