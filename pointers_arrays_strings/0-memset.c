#include "main.h"

/**
*_memset - The _memset() 
*@s:s
*@b:b
*@n:n
*Return: valor s
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
