#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	va_list arr;
	int i, j, len;

	i = 0;
	len = 0;
	va_start(arr, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(arr, int));
			i+=2;
			len++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			char *str = va_arg(arr, char *);
			for (j = 0; str[j] != '\0'; j++)
			{
				_putchar(str[j]);
				len++;
			}
			i+=2;
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(arr);
	return (len);
}
