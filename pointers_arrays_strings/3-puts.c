#include "main.h"
/**
 *_puts - printea un string
 * @str: string to print
 *
 * Description: printea un  string
 * On success: retorna numeros printeadso
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
