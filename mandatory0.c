#include "holberton.h"
/**
 * print_char - prints characters
 * @ls: argument parameters
 * Return: 1
 */
int print_char(va_list ls)
{
	_putchar(va_arg(ls, int));
	return (1);
}
/**
 * print_string - prints strings
 * @ls: argument parameter
 * Return: 1
 */
int print_string(va_list ls)
{
	char *str;
	int i;

	str = (va_arg(ls, char*));
	if (str != NULL)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
}
/**
 * print_prtg - print %
 * @ls: argument parameters
 * Return: 1
 */
int print_prtg(va_list ls)
{
	(void)ls;
	_putchar('%');
	return (1);
}
