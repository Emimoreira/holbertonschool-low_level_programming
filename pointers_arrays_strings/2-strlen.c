#include "main.h"
/**
 *_strlen - retorna lenguaje 
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
