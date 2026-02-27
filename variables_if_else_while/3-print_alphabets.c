#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then in uppercase,
 * using putchar only three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;
	char up;

	/* طباعة الحروف الصغيرة */
	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	/* طباعة الحروف الكبيرة */
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}

	/* طباعة السطر الجديد */
	putchar('\n');

	return (0);
}
