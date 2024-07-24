#include <main.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list arr;
 	int i, len;

	len = 0;
	va_start(arr, format);
	for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            putchar(format[i]);
        }
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
            {
                putchar(va_arg(arr, int));
                len++;

            }
            else if (format[i] == 's') {
                char *str = va_arg(arr, char *);
                while (*str != '\0') {
                    putchar(*str);
                    len++;
                    str++;
                }
            }
            else if (format[i] == '%')
            {
                putchar('%');
                len++;
            }
        }
    }
    va_end(arr);
    return len;
}
