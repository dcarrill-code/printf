#include "holberton.h"
/**
 * int_print - prints a string of numbers
 * @ls: is the list of number to show
 *
 * Return: the count of numbers prints
 */

int int_print(va_list ls)
{
	char *string;
	long int n, cont = 0;

	n = va_arg(ls, int);
	string = convnum(n, 10);

	while (string[cont] != '\0')
	{
		_putchar(string[cont]);
	}

	return (cont);
}
