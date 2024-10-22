#include "main.h"

/**
 * print_alphabet_x10 - escribe 10 veces el abcdario
 *seguido de una nueva línea
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++
	}
}
