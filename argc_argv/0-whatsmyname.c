#include <stdio.h>

/*
 *main - es EL main
 *@argc: variablee
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
       	{
	printf("El nombre del programa es: %s\n", argv[0]);
	}
	else
       	{
	printf("Error: No se pudo obtener el nombre del programa.\n");
	}
    
	return 0;
}
