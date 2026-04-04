#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: the size of the array to be created
 * @c: the char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* Return NULL if size is 0 */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	/* sizeof(char) is always 1, but it's good practice to include it */
	array = malloc(sizeof(char) * size);

	/* Check if malloc failed */
	if (array == NULL)
		return (NULL);

	/* Initialize the array with the character c */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
