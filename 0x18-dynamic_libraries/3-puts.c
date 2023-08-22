#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: The string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
