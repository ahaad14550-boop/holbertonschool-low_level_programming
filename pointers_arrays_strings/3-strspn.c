#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string to check
 * @accept: the string containing list of allowed characters
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j, found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
		{
			n++;
		}
		else
		{
			break;
		}
	}

	return (n);
}
