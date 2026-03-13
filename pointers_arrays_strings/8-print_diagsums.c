#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: the size of the matrix (size x size)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* القطر الرئيسي: العنصر رقم 0، ثم 4، ثم 8 في مصفوفة 3*3 */
		sum1 += a[i * (size + 1)];

		/* القطر الثانوي: العنصر رقم 2، ثم 4، ثم 6 في مصفوفة 3*3 */
		sum2 += a[(i + 1) * (size - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
