#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...) {
    va_list args;
    unsigned int i = 0;
    char *str;
    char c;
    int d;
    float f;

    va_start(args, format);

    while (format && format[i]) {

        if (i != 0) {
            printf(", ");
        }


        if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') {

            if (format[i] == 'c') {
                c = va_arg(args, int);
                printf("%c", c);
            }
            if (format[i] == 'i') {
                d = va_arg(args, int);
                printf("%d", d);
            }
            if (format[i] == 'f') {
                f = va_arg(args, double);
                printf("%f", f);
            }
            if (format[i] == 's') {
                str = va_arg(args, char *);
                if (str == NULL) {
                    printf("(nil)");
                } else {
                    printf("%s", str);
                }
            }
        }

        i++;
    }

    printf("\n");

    va_end(args);
}
