#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle.
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			/* طباعة المسافات أولاً */
			for (column = 1; column <= (size - row); column++)
			{
				_putchar(' ');
			}
			/* طباعة الرموز # ثانياً */
			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
