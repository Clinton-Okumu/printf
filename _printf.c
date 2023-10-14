#include "main.h"
/**
 * print_char - Print a character and increment the count.
 *
 * @c: Character to print.
 * @count: Pointer to the count of characters printed.
 */
static void print_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

/**
 * print_str - Print a string and update the count.
 *
 * @str: String to print.
 * @count: Pointer to the count of characters printed.
 */
static void print_str(const char *str, int *count)
{
	write(1, str, strlen(str));
	(*count) += strlen(str);
}


/**
 * process_format - Process format specifiers and update the count.
 *
 * @format: Format specifier.
 * @args_list: Argument list.
 *
 * Return: the count of characters printed for the given format specifier.
 */
static int process_format(const char *format, va_list args_lists)
{
	int count = 0;
	char c;

	switch (*format)
	{
		case 'c':
			c = va_arg(args_lists, int);
			print_char(c, &count);
			break;
		case 's':
			{
			const char *str = va_arg(args_lists, const char *);

			print_str(str, &count);
			break;
			}
		default:
			print_char(*format, &count);
	}
	return (count);
}

/**
 * my_printf - Custom printf function that processes format specifiers.
 *
 * @format: Format string.
 *
 * Return: the number of characters printed or -1 on error.
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
			print_char(*format, &count);
		} else
		{
			format++;

			if (*format == '\0')
			{
				break;
			} else if (*format == '%')
			{
				print_char(*format, &count);
			} else
			{
				count += process_format(format, args_lists);
			}
		}
		format++;
	}
	va_end(args_lists);
	return (count);
}
