#include "dog.h"
/**
 * init_dog - Inicializa una variable del tipo struct dog
 * @d: puntero a struct dog
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueño del perro
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
