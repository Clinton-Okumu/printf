#include "main.h"
/**
 *write_char - Function to write a character to standard output
 *@c: character
 *@count: integer
 */
void write_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

/**
 *write_string - function to write string
 *@str: string
 *@count: integer
 */
void write_string(const char *str, int *count)
{
	write(1, str, strlen(str));
	(*count) += strlen(str);
}

/**
 *_printf - Custom printf function
 * @format: Format string
 *
 * Description:
 * A custom printf function that handles format specifiers
 * %c for characters and %s for strings. It writes the formatted output
 * to the standard output.
 *
 * Return:
 * The number of characters printed, or -1 if format is NULL.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args_lists;

	if (format == NULL)
		return (-1);

	va_start(args_lists, format);

	while (*format)
	{
		if (*format != '%')
		{
			write_char(*format, &count);
		} else
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write_char('%', &count);
			} else if (*format == 'c')
			{
				char c = va_arg(args_lists, int);

				write_char(c, &count);
			} else if (*format == 's')
			{
				char *str = va_arg(args_lists, char *);

				write_string(str, &count);
			}
		}
		format++;
	}
	va_end(args_lists);
	return (count);
}
