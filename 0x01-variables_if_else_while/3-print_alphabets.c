#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
*Return: Always return 0
*/

int main(void)
{
	char alPHA;

	for (alPHA = 'a'; alPHA <= 'z'; alPHA++)
	{
		putchar(alPHA);
	}
	for (alPHA = 'A'; alPHA <= 'Z'; alPHA++)
		putchar(alPHA);

	putchar('\n');
	return (0);
}
