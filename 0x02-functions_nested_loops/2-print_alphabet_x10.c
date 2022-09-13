#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10X the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alphabets[i]);
		}
		_putchar('\n');
	}
}
