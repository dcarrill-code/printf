#include "holberton.h"
/**
 * _printf - this is our own version of printf it prints on the screen an array
 * @format: is the string to print on the screen
 *
 * Return: returns the number of characters
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, flag, l = 0, st_len = 0, n1 = 0, n2 = 0;
	char sc = '%';
	va_list ls;

	va_start(ls, format);

	while(format && *(format + i))
	{
		flag = 1;
		if (format[i] == sc && format[i + 1] == '\0')
		{
			return (-1);
		}
		else if ((format[i] == sc) &&
				((format[i + 1] == sc) || (format[i + 1] == '\0')))
		{
			_putchar('%');
			n1++;
			flag = 0;
			i++;
		}
		else if ((format[i] == sc) && (format[i + 1] != '\0')
				&& (get_op_func(format[i + 1]) != NULL))
		{
			n2++;
			flag = 0;
			l = (get_op_func(format[i + 1]))(ap);
			st_len += l;
			i++;
		}
			if (flag)
		{
			_putchar(format[i]);
		}
		if (format[i] != '\0')
			i++;
	}
	va_end(ls);
	if (!format)
	{
		return (-1);
	}
	return (i - (n1 + 2 * n2) + st_len);

}
