#include "main.h"

/**
 * write_bin - prints a binary number.
 * @args_lists: arguments.
 * Return: 1.
 */
int write_bin(va_list args_lists)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(args_lists, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			put_char(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		put_char('0');
	}
	return (cont);
}
