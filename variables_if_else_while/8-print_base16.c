#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line, using putchar only three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char la;

	/* طباعة الأرقام من 0 إلى 9 */
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	/* طباعة الحروف من a إلى f */
	for (la = 'a'; la <= 'f'; la++)
	{
		putchar(la);
	}

	/* طباعة السطر الجديد */
	putchar('\n');

	return (0);
}
