#include <stdio.h>
/**
 * main - prints numbers to base 16
 *
 * Return: Always (0) success
 */
int main(void)
{
	int x;
	char low;

	for (x = '0'; x <= '9'; x++)
	putchar(x);
	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
