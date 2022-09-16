#include <stdio.h>
/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
	long numbers = 612852475143;
	int lpf;

	while (lpf++ < numbers / 2)
	{
		if (numbers % lpf == 0)
		{
			numbers /= 2;
			continue;
		}

		for (lpf = 3; lpf < numbers / 2; lpf += 2)
		{
			if (numbers % lpf == 0)
				numbers /= lpf;
		}
	}
	printf("%ld\n", numbers);
	return (0);
}
