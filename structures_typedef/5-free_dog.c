#include "dog.h"
/**
 * free_dog - Libera memoria
 * @d: puntero a perro
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
