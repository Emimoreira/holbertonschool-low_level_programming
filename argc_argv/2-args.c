#include <stdio.h>
/**
 *main - contenedor de v
 *@argc: variablee
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
