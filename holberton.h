#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
void _puts(char *str);
/**
 * struct option - structure for diferent types of cases
 * @op: option specifier.
 * @f: Function pointer.
 */

typedef struct option
{
	char *op;
	int (*f)(va_list);
}option;

int print_char(va_list ls);
int print_string(va_list ls);
int print_prtg(va_list ls);
int printnum(int n);
int print_dec(va_list ls);

#endif
