#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: variablee
 *@argv: array
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int resultado;

	if (argc != 3)

       	{

	printf("Error\n");
	return 1;

	}

	 num1 = atoi(argv[1]);
	 num2 = atoi(argv[2]);
	 resultado = num1 * num2;

	printf("%d\n", resultado);
	return 0; 
}
