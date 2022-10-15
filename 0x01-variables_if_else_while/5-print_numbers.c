#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always return 0
*/

int main(void)
{
	int base_10;

	base_10 = 0;
	while (base_10 < 10)
	{
		printf("%d", base_10);
		base_10++;
	}
	putchar('\n');
	return (0);
}
