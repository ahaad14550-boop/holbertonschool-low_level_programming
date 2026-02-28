#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* استخراج الرقم الأخير باستخدام باقي القسمة */
	last_digit = n % 10;

	/* تحويل النتيجة لموجب إذا كان الرقم الأصلي سالباً */
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	/* طباعة الرقم باستخدام _putchar */
	_putchar(last_digit + '0');

	/* إعادة قيمة الرقم الأخير */
	return (last_digit);
}
