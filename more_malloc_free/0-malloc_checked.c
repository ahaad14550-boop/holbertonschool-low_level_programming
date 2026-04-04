#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes to allocate.
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, cause normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Attempt to allocate memory */
	ptr = malloc(b);

	/* Check if allocation failed */
	if (ptr == NULL)
	{
		/* Exit the process with status 98 as required */
		exit(98);
	}

	return (ptr);
}
