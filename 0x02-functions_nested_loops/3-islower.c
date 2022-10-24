#include "main"

/**
* int _islower(int c) - checks for lowercase character
*@c: the character
*/

_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
}
