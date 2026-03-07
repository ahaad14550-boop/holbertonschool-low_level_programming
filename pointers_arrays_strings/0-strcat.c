#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* 1. Find the end of dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* 2. Append src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* 3. Add the final null terminator */
	dest[i] = '\0';

	return (dest);
}
