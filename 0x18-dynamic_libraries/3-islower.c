#include "main.h"

/**
 * _islower - a function that checks for lowercase characte
 * @c: character to check
 *
 * Return: 1 if lowercase, 0 if othewise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
