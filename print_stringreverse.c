#include "main.h"

/**
 *
 * printf_stringreverse - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 * Return: the string
 */

int printf_stringreverse(va_list args)
{
	char *a = va_arg(args, char*);
	int i;
	int b = 0;
	
	if (a == NULL)
		a = "(null)";					
	while (a[b] != '\0')
		b++;
	for (i = b - 1; i >= 0; i--)
		_putchar(a[i]);
	return (b);
}
