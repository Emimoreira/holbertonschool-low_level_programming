#include "main.h"
/**
* _strpbrk - busca el primer caracter de accept
* @s:s
* @a:a
*Return: nada
*/

char *_strpbrk(char *s, char *accept);

{

while (*s)

	{
	char *a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return s;
			}
			a++
		}
		s++
	}
	return NULL
}
