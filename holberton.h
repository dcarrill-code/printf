#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int *char_print(va_list p);
int string_print(va_list p);
int _printf(const char *format, ...);
char *convnum(long int i, int b);

/**
 * struct option - Function call structure.
 *
 * @op: Option.
 * @f: Function.
 */
typedef struct option
{
	char *op;
	int (*f)();
}option;
int (*get_op_func(char s))(va_list);

#endif
