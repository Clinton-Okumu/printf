#include "main.h"
/**
 *_printf - function selecting correct printf function
 *@format: identifier to look for
 *Return: length of the string
 */
int _printf(const char *format, ...)
{
	conversion_match m[] = {
		{"%s", write_string}, {"%c", write_char},
		{"%%", write_37},
		{"%i", write_int}, {"%d", write_dec}, {"%r", write_srev},
		{"%R", write_rot13}, {"%b", write_bin},
		{"%u", write_unsigned},
		{"%o", write_oct}, {"%x", write_hex}, {"%X", write_HEX},
		{"%S", write_exclusive_string}, {"%p", write_pointer}
	};

	va_list args_lists;
	int i, j, len = 0;

	va_start(args_lists, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args_lists);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		put_char(format[i]);
		len++;
		i++;
	}
	va_end(args_lists);
	return (len);
}
