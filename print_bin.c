#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: 1
 */

int printf_binary(va_list ap)
{
	int bin = 0;
	int cont = 0;
	int i, a = 1, b;
	
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int v;

	for (i = 0; i < 32; i++)
	{
		v = ((a << (31 - i)) & num);
		if (v >> (31 - i))
			bin = 1;
		if (bin)
		{
			b = v >> (31 - i);
			_putchar(b + 48);
			cont++;																	
		}
	}
	if (cont == 0)
	{
		cont++;	
		_putchar('0');	
	}
	return (cont);
}
