#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: the caracter to print
 * Return: on success 1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
