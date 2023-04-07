#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int r;
	int z;


	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[r] = src[z];
	r++;
	z++;
	}
	dest[r] = '\0';
	return (dest);
}

