#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */

/**
 * __attribute__((__unused__)) - This is a compiler-specific attribute that
 * tells the compiler to ignore any warnings about the variable argc being
 * unused
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
