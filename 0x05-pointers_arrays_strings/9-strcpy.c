#include "main.h"

/**
 * _strcpy - copy paste string
 * @dest: pointer to destination
 * @src: pointer to source string
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
