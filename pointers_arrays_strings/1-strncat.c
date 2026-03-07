#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* 1. Find the end of dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* 2. Append src to dest, but only up to n bytes */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* 3. Add the null terminator at the final position */
	dest[i] = '\0';

	return (dest);
}
