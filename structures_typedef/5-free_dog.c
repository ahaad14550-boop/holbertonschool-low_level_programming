#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: pointer to the dog to free
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);

		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}
}
