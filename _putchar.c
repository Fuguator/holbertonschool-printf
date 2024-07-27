#include "main.h"
/**
 * _putchar - prints a character
 * @c: value in buffer
 * Return: value from buffer
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
