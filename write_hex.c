#include "main.h"

/**
 * write_hex - prints an hexgecimal number.
 * @args_lists: arguments.
 * Return: counter.
 */
int write_hex(va_list args_lists)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(args_lists, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		put_char(array[i] + '0');
	}
	free(array);
	return (counter);
}
