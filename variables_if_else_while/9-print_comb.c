#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * Numbers separated by comma and space, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n); /* المرة الأولى: لطباعة الرقم */
		if (n != 57) /* إذا لم يكن الرقم هو '9' */
		{
			putchar(','); /* المرة الثانية: للفاصلة */
			putchar(' '); /* المرة الثالثة: للمسافة */
		}
	}
	putchar('\n'); /* المرة الرابعة: للسطر الجديد */

	return (0);
}
