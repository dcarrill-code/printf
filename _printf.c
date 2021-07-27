#include "holberton.h"
/**
 * _printf - this is our own version of printf it prints on the screen an array
 * @format: is the string to print on the screen
 *
 * Return: returns the number of characters
 */

int _printf(const char *format, ...)
{
	int i, cont, printn;
	va_list ls;
	int sint[10];
	char *temp;

	va_start(ls, format);
	while (format[cont])
	{
		cont++;
	}

	while (format)
	{
		if (*format == '%')
		{
			format++;
			switch(*format)
			{
				case 'c':
					*temp = va_arg(ls, int);
					format++;
				break;

				case 's':
					temp = va_arg(ls, char*);
					format++;
				break;

				case 'd':
					printn = va_arg(ls, int);
					_itoa(printn, sint, 10);
					format++;
				break;

				case 'i':
					printn = va_arg(ls, int);
					_itoa(printn, sint, 10);
					format++;
				break;

				case '%':
					temp[i] = va_arg(ls, int);
					format++;
				break;
			}
		}
		format++;
	}
	va_end(ls);
	printf("%s", temp);
	return (cont);
}
