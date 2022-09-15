#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char numbers[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		_putchar(numbers[i]);
	}
	_putchar('\n');
}
