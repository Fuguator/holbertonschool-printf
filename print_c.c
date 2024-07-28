#include "main.h"
#include <stddef.h>
/**
 * print_c - prints a char
 * @len: length of string
 * @a: varue to be printed
 * @return: length
 */
int print_c(int *len, char a)
{
	write(1, &a, 1), (*len)++;
	return (*len);
}
