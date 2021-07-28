#include "holberton.h"
/**
 *char_print - display a character
 *@p: argument
 *Return: integer number of char
 */
int *char_print(va_list p)
{
	_putchar(va_arg(p, int));
	return (1);
}
/**
 *string_print - display a string
 *@p: argument
 *Return: integer number of char
 */
int string_print(va_list p)
{
	char *s;
	int i;

	s = va_arg(p, char *);

	if (s != NULL)
	{
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}

}
