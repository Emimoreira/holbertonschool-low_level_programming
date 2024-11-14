#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Asigna memoria usando malloc
 * @b: El número de bytes a asignar
 *
 * Return: Puntero a la memoria asignada
 * Si malloc falla, termina el proceso con el estado 98
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}

	return ptr;
}
