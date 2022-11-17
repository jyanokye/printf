#include "main.h"

/**
 * reverse_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int lang1 = 0;
	int lang2 = 0;
	char tmp;

	while (s[lang1] != '\0')
	{
		lang1++;
	}

	while (lang2 <= lang1)
	{
		tmp = s[lang2];
		s[lang2] = s[lang1];
		s[lang1] = tmp;
		lang2++;
		lang1--;
	}
}
