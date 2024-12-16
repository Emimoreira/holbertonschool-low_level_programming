#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...) {
	va_list args;
	unsigned int i;

	va_start(args, n);

    for (i = 0; i < n; i++) 
	{
		printf("%d", va_arg(args, int));

		if (i != n - 1 && separator != NULL) {
		printf("%s", separator);
	}
	}

	printf("\n");

	va_end(args);
}

int main() 
{

	print_numbers(", ", 5, 1, 2, 3, 4, 5);
	print_numbers(" - ", 3, 10, 20, 30);
	print_numbers(NULL, 2, 100, 200);

	return 0;
}
