#include "main.h"

/**
 *write_pointer - prints an hexgecimal number.
 *@args_lists: arguments.
 * Return: counter.
 */
int write_pointer(va_list args_lists)
{
	void *p = va_args(args_lists, void*);

	if (p == NULL)
	{
		return (write_str("(nil)"));
	}

	int len = write_str("0x");

	len += write_hex_aux((unsigned long)p);
	return (len);
}
