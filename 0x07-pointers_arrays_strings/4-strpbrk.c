#include "main.h"

/**
 * _strpbrk - prints the comsecutive character of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); J++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
