#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str = NULL
 * or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	/* 1. Handle NULL input */
	if (str == NULL)
		return (NULL);

	/* 2. Calculate the length of the string */
	while (str[len] != '\0')
		len++;

	/* 3. Allocate memory (length + 1 for the null terminator) */
	dup = malloc(sizeof(char) * (len + 1));

	/* 4. Check if malloc failed */
	if (dup == NULL)
		return (NULL);

	/* 5. Copy the characters */
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
