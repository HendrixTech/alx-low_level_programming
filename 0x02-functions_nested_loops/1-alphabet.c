#include "main.h"

/**
 * print_alphabet - function that prints the alphabets in lowercase
 *
 * Retutn: void
 *
 */

void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
}
