#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: The specified format
 *
 * Return: The number of characters that were printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, temp = 0;

	va_list args_lists;

	if (!format || (format[0] == '%' && format[1] == '\0'))

		return (-1);

	va_start(args_lists, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
		} else
		{
			i++;
			if (format[i] == 'c')
			{
				char c = (char)va_arg(args_lists, int);

				write(1, &c, 1);
			} else if (format[i] == 's')
			{
				char *str = va_arg(args_lists, char *);

				write(1, str, strlen(str));
			} else if (format[i] == '%')
			{
				write(1, &format[i], 1);
			}
		}
		temp++;

	}
	va_end(args_lists);
	return (temp);
}
