#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * 6-print_numberz.c - cuenta todo lo que tenga solo un digito  de base 10 desade 0
 *
 *Return: 0
 */
int main(void)
{
	int i;
	for (int i= 0; i < 10; i++)
	{
	putchar(i + '0');
	}

	putchar('\n');

	return 0;
}
