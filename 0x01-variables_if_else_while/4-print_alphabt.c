#include <std.io.h>
#include <std.lib.h>

/**
* main - Entry point
*
* Return: Always return 0
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha)
		}
	}
	putchar('\n')
	return (0)
}
