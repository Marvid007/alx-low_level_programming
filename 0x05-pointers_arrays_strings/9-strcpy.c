#include "main.h"

/**
 * _strcpy - function that converts a string to an integer
 * @dest: This is destiny
 * @src: string to convert
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
