#include "main.h"

/**
 * _strlen_recursion - يعيد طول السلسلة النصية باستخدام التكرار
 * @s: مؤشر (pointer) للسلسلة النصية
 *
 * Return: طول النص (integer)
 */
int _strlen_recursion(char *s)
{
	/* Base Case: إذا وصلنا لنهاية النص */
	if (*s == '\0')
	{
		return (0);
	}

	/* التكرار: 1 + استدعاء الدالة للحرف التالي */
	return (1 + _strlen_recursion(s + 1));
}
