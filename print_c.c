#include "main.h"
/**
 * print_c - prints a char
 * @len: length of string
 * @a: varue to be printed
 * @return: length
 */
int print_c(int *len, char a)
{
	if (!a)
		write(1, "(null)", 6), *len += 6;
	else if (a == '\0')
		return (*len);
	else
		write(1, &a, 1), (*len)++;
	return (*len);
}
