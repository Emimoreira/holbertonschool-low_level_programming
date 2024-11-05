#include "main.h"
/**
* _strpbrk - busca el primer caracter de accept
* @s:s
* @a:a
* @accept: accept
*Return: nada
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
