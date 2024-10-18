#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
	putchar(lower++);
	}

	while (upper <= 'Z')
	{
	putchar(upper++);
	}

	putchar('\n');

	return (0);
}
