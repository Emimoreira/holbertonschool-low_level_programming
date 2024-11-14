#include <stdlib.h>

/**
 * create_array - Crea un array de caracteres y lo inicializa con un carácter específico.
 * @size: El tamaño del array a crear.
 * @c: El carácter con el que se inicializará cada posición del array.
 *
 * Return: Un puntero al array, o NULL si el tamaño es 0 o si falla la creación del array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return NULL;

	array = (char *)malloc(size * sizeof(char));
    
	if (array == NULL)
	return NULL

	for (i = 0; i < size; i++)
	array[i] = c;

	return array;
}
