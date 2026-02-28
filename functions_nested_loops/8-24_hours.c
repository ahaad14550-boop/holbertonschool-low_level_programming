#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			/* طباعة الرقم الأول من الساعة */
			_putchar((hour / 10) + '0');
			/* طباعة الرقم الثاني من الساعة */
			_putchar((hour % 10) + '0');
			/* طباعة النقطتين الفاصلتين */
			_putchar(':');
			/* طباعة الرقم الأول من الدقيقة */
			_putchar((minute / 10) + '0');
			/* طباعة الرقم الثاني من الدقيقة */
			_putchar((minute % 10) + '0');
			/* سطر جديد للانتقال للدقيقة التالية */
			_putchar('\n');
		}
	}
}
