#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	/* Check the first character of the string */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;

	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			/* If the current character is a separator */
			if (s[i] == sep[j])
			{
				/* Check if the NEXT character is a lowercase letter */
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
		i++;
	}

	return (s);
}
