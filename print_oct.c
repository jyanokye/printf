#include "main.h"

/**
 * printf_oct - prints an octal number.
 * @ap: arguments.
 * Return: counter.
 */

int printf_oct(va_list ap)
{
	int i;
	int *array;
	int count = 0;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
