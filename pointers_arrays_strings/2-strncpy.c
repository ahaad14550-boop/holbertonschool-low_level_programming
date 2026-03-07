#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination buffer
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* 1. Copy characters from src to dest up to n bytes */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* 2. If src is shorter than n, fill the rest with '\0' */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
