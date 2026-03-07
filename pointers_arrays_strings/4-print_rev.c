#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print characters starting from the end to the beginning */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
