#include "holberton.h"
/**
 * printnum - prints number
 * @n: number passed
 * Return: 1
 */
int printnum(int n)
{
	int count = 0;
	unsigned int num;
	unsigned int digit;
	unsigned int i;
	unsigned int long_num;

	long_num = n;
	if (n < 0)
	{
		count++;
		long_num = long_num * -1;
		_putchar('-');
	}

	if (long_num == 0)
	{
		count++;
		_putchar('0');
		return (count);
	}

	i = 1;
	while ((long_num / i) > 9)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		num = long_num / i;
		digit = num % 10;
		count++;
		_putchar(digit + '0');
		i = (i / 10);
	}
	return (count);
}
/**
 * print_dec - prints decimals and integers
 * @ls: argument parameters
 * Return: 1
 */
int print_dec(va_list ls)
{
	int output;
	int count;

	output = va_arg(ls, int);
	count = printnum(output);
	return (count);
}
