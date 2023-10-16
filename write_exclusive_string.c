#include "main.h"
/**
 * write_exclusive_string - print exclusuives string.
 * @args_lists: argumen t.
 * Return: the length of the string.
 */

int write_exclusive_string(va_list args_lists)
{
	char *s;
	int i, len = 0;
	int temp;

	s = va_arg(args_lists, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			put_char('\\');
			put_char('x');
			len = len + 2;
			temp = s[i];
			if (temp < 16)
			{
				put_char('0');
				len++;
			}
			len = len + write_hex_aux(temp);
		}
		else
		{
			put_char(s[i]);
			len++;
		}
	}
	return (len);
}
