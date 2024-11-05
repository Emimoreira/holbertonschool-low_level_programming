#include "main.h"
#include <stddef.h>
/**
*_strchr - Returns a pointer to the first occurrence
*@s:string targeted
*@c:character targeted
*Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
	int e;

	for (e = 0; (s[e] != c) && (s[e] != '\0'); e++)
		;
	if (s[e] == c)
		return (s + e);
	else
		return (NULL);
}
