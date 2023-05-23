#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alpha[i]);
		}
		_putchar('\n');
	}
}
