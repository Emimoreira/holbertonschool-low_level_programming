#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function to print name
 * @name: pointer of char type
 * @f: pointer to function
 * Return: Always successful
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);

	}
}
