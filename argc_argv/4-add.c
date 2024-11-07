#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Entry point
 *@argc: variablee
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int suma = 0;
	int i = 1;
	int j = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (; i < argc; i++)
	{
	for (; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	suma += atoi(argv[i]);
	}
	printf("%d\n", suma);
	return (0);
}
