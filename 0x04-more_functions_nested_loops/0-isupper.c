#include "main.h"

/**
*_isupper - A function that checks uppercase character
*@c: An input character
*Return: 1 if c is uppercase or 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

