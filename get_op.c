#include "holberton.h"
/**
 *get_op_func - select the right operation
 *@s: input a character
 *Return: number of char
 */
int (*get_op_func(char s))(va_list)
{
	option lst[] = {
		{'c', char_print},
		{'s', string_print},
		{'d', int_print},
	};
	int i = 0;

	while (i < 10)
	{
		if (s == lst[i].op)
		{
			return (lst[i].f);
		}
		i++;
	}
	return (NULL);
}
