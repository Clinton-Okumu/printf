#include "main.h"

/**
 * write_srev - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int write_srev(va_list args)
{

	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		put_char(s[i]);
	return (j);
}
