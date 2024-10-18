#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	printf("ingresa un numero: ");
	scanf("%d",&n);

	int (last_digit = n% 10 );
        

	if (last_digit > 5)
       	{
		printf("la cadena y es mayor que 5\n");
	}
       	else if (last_digit == 0)
       	{
	        printf("la cadena y es 0\n");
	}
       	else
       	{
		printf("la cadeba y es menor que 6 y no 0\n");
	}

	srand(time(0));
	n = rand() - RAND_MAX / 2; 	
	return (0);
}
