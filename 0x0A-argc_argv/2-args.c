#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: Number of argument
 * @argv: An arrray of pointers to characters
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
