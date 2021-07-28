#include "holberton.h"
/**
 * _printf - this is our own version of printf it prints on the screen an array
 * @format: is the string to print on the screen
 *
 * Return: returns the number of characters
 */

int _printf(const char *format, ...)
{
	int i, count;
	char tmp;
	va_list ls;


	va_start(ls, format);

	while(format[count])
	{
		count++;
	}

	while(format[i])
	{

	}
	va_end(ls);
}
