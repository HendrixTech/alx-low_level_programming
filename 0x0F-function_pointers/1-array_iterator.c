#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on each element of
 * an array
 *
 * @array: an array of parameers to be passed to @action
 *
 * @size: size/length of array
 *
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;


	if (!action || !array)
		return;


	for (i = 0; i < size; i++)
		action(array[i]);
}
