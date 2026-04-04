#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of each element.
 *
 * Return: pointer to allocated memory, or NULL if fails or params are 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int total_size;

	/* 1. التحقق من المدخلات */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* 2. حساب الحجم الإجمالي */
	total_size = nmemb * size;

	/* 3. حجز الذاكرة باستخدام malloc */
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* 4. تصفير الذاكرة (إعداد كل بايت إلى 0) */
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}

	return ((void *)ptr);
}
