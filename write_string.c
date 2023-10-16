#include "main.h"
/**
 * write_string - print a string.
 * @args_lists: argumen t.
 * Return: the length of the string.
 */

int write_string(va_list args_lists)
{
	char *s;
	int i, len;

	s = va_arg(args_lists, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			put_char(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			put_char(s[i]);
		return (len);
	}
}
