#include "main.h"

/**
 *write_pointer - prints an hexgecimal number.
 *@args_lists: arguments.
 * Return: counter.
 */
int write_pointer(va_list args_lists)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(args_lists, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			put_char(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	put_char('0');
	put_char('x');
	b = write_hex_aux(a);
	return (b + 2);
}
