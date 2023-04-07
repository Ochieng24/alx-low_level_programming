#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: input value
 * @src: input value
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int y;
	int w;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	w = 0;
	while (src[w] != '\0')
	{
		dest[y] = src[w];
		y++;
		w++;
	}
	dest[y] = '\0';
	return (dest);
}
