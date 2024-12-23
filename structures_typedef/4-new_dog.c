#include "dog.h"
/**
 * new_dog - Función que crea un nuevo perro
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueño del perro
 * Return: NULL si la función falla
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = 0, len2 = 0, i;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(len1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		dog->name[i] = name[i];
	dog->owner = malloc(len2 + 1);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= len2; i++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}
