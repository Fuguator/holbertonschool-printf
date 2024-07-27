#include "main.h"
/**
 * print_s - prints a string
 * @len: length of string
 * @a: first element of string
 * Retutn: length
 */
int print_s(int *len, char *a)
{
    int i = 0;

    if(!a)
    {
        write(1, "(null)", 6);
        *len += 6;
    }
    else
    {
        for (; *(a + i) != '\0'; i++)
        {
            write(1, (a + i), 1);
            (*len)++;
        }
    }
    return (*len);
}
