#include "main.h"
/**
 * _printf - immitates printf function
 * @format: may be c, s, i and so on
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list arr;

	va_start(arr, format);

	if (!format)
		return (-1);

	for (; *(format + i) != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				print_c(&len, va_arg(arr, int);
			else if (format[i + 1] == 's')
				print_s(&len, va_arg(arr, char *);
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
				print_i(&len, va_arg(arr, int);
			else if (format[i + 1] == '%')
				_putchar('%'), len++;
			else if (format[i + 1] == '\0')
				continue;
			else
				_putchar('%'), _putchar(format[i + 1]), len += 2;
			i++;
		}
		else
			_putchar(format[i]), len++;
	}

	if (!len || len == 0)
		return (-1);
	va_end(arr);
	return (len);
}
