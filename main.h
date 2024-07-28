#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
void print_c(int *len, char a);
int print_s(int *len, char *a);
int print_i_and_d(int *len, va_list a);

#endif
