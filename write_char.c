#include "main.h"

/**
 * write_char - prints a char.
 * @args_lists: arguments.
 * Return: 1.
 */
int write_char(va_list args_lists)
{
	char s;

	s = va_arg(args_lists, int);
	put_char(s);
	return (1);
}
