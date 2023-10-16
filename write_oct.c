#include "main.h"

/**
 * write_oct - prints an octal number.
 * @args_lists: arguments.
 * Return: counter.
 */
int write_oct(va_list args_lists)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(args_lists, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		put_char(array[i] + '0');
	}
	free(array);
	return (counter);
}
