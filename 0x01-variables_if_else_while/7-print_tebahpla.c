#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always return 0
*/

int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);
	putchar('\n');
	return (0);
}
