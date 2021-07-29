#include "holberton.h"
/**
 * convnum - this function convert ints to strings
 * @i: this number is the number to convert
 * @b: this number is the one that get the base
 *
 * Return: returns the converted string
 */

char *convnum(long int i, int b)
{
	char const digit[] = "0123456789abcdef";
    char sign = 0;
	char buffer[50];
	char *ptr;

	unsigned long n = i;

	if (i < 0){
        n = i;
		sign = '-';
    }

	ptr = &buffer[50];
    *ptr = '\0';
    do{ /*Move back, inserting digits as u go*/
        *--ptr = digit[i % b];
        n = n / b;
    }while (n != 0);

	if (sign)
	{
		*--ptr = sign;
	}
    return (ptr);
}
