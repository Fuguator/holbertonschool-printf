#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
    va_list arr;
    int i, len = 0;
    if (!format)
        exit(98);
    if (*format == '%' && *(format + 1) == 0)
        exit(98);
    va_start(arr, format);
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            putchar(format[i]);
            len++;
        }
        else {
            i++;
            if (format[i] == 'c')
            {
                putchar(va_arg(arr, int));
                len++;

            }
            else if (format[i] == 's') {

                int i = 0;
                int z = 0;
                if (!format)
                {
                    putchar('(');
                    putchar('n');
                    putchar('u');
                    putchar('l');
                    putchar('l');
                    putchar(')');
                    z = z + 6;
                }
                else
                {
                    while (*(format + i) != '\0')
                    {
                        putchar(*(format + i));
                        i++;
                        z++;
                    }
                }
            }
            else if (format[i] == '%') {
                putchar('%');
                len++;
            }
            else
            {
                putchar('%');
                putchar(format[i]);
                len+=2;
            }
        }
    }
    va_end(arr);
    return len;
}
