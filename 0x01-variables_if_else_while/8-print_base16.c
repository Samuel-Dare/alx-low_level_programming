#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always return 0
*/

int main(void)
{
	int n;
	char a;

	for (n = 0; n < 16; n++)
		putchar((n % 10) + '0');
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}