#include "main.h"

/**
 * _strcpy - copy the content of one variable to another
 * @dest: This is destiny
 * @src: This is the copy
 *
 * Return: This is the return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
