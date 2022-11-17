#include "main.h"

/**
 * print_binaries - prints the binary mode of a number
 * @ap: va_list
 *
 * Return: number of characters printed
 */
int print_binaries(va_list ap)
{
	int n = va_arg(ap, int);
	int i, count = 0;
	int tmp;
	int lang = 0;
	char *s = (char *)malloc(sizeof(char) * 32);


	while (n != 0)
	{
		tmp = n % 2;
		s[lang++] = tmp + '0';
		n /= 2;
	}
	s[lang] = '\0';
	rev_string(s);
	for (i = 0; i < lang; i++)
	{
		putchar(s[i]);
		count++;
	}
	free(s);
	return (count);
}
