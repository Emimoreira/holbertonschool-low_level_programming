#include "main.h"
/**
 *_memcpy - copies n bytes
 *@dest:dest
 *@src:src
 *@n:n
 *Return: returns pointer n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
