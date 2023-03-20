#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always (0) success
 */
int main(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
if (x != 'e' && x != 'q')
putchar(x);

putchar('\n');

return (0);
}
