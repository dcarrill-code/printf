#include "holberton.h"
#include <unistd.h>

/**
 * _printf - prints a string whit funtionality
 * @format: the string to print
 * Return: 0 always success
 */
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	va_list ls;
	option lst[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_prtg},
		{"d", print_dec},
		{"i", print_dec},
		{NULL, NULL},
	};
	if (format == NULL)
		return (-1);
	va_start(ls, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			j = 0;
			while (lst[j].op != NULL)
			{
				if (*(lst[j].op) == format[i])
					count += lst[j].f(ls);
				j++;
			}
			i++;
		}
		if (format[i] != '%' && format[i] != '\0')
		{
			count += _putchar(format[i]);
			i++;
		}
	}
	va_end(ls);
	return (count);
}
