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
	int i = 0, j, len = 0;

	va_start(arr, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(arr, int));
			i += 2;
			len++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			char *str = va_arg(arr, char *);
			if (str == NULL)
			{
				_putchar('(');
				_putchar('n');
				_putchar('u');
				_putchar('l');
				_putchar('l');
				_putchar(')');
				len += 6;
				i += 2;
			}
			else
			{
				for (j = 0; str[j] != '\0'; j++)
				{
					_putchar(str[j]);
					len++;
				}
				i += 2;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i += 2;
			len++;
		}
		else if (format[i] == '%')
		{
			_putchar('%');
			i++;
		}
		else
			_putchar(format[i]), len++, i++;
	}
	va_end(arr);
	return (len);
}
