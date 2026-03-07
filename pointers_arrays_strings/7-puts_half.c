#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n, i;

	/* Calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine the starting point (n) */
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	/* Print from n until the end of the string */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
