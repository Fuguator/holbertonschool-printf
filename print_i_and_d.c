#include "main.h"
/**
 * print_i_and_d - prints int and decimals
 * @len: length of string
 * @a: int/d
 * Return: length
 */
int print_i_and_d(int *len, va_list a)
{
	int i = 1, num = va_arg(a, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		(*len)++;
	}
	for (; (num / i) / 10 != 0; i *= 10)
		(*len)++;
	for (; i != 1; i /= 10)
		_puthcar('0' + (num / i)), num %= i;

	_putchar('0' + (num % 10));
	(*len)++;

	va_end(a);
	return (*len);
}
