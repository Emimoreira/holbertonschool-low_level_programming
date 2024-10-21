#include <stdio.h>
/**
 * main - imprime todas las combinaciones posibles de números de un solo dígito.
 *Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)

	{

	for (j = i + 1; j < 10; j++)

	{

	printf("%d%d\n", i, j);

	}
	}

	return (0);
}
