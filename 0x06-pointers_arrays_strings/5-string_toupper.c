#include "main.h"

/**
* *string_toupper - function that changes lowercase of string to uppercase
*@s: input string
*Return: char pointer to converted string
*/

char *string_toupper(char *s)
{
	char *start = s;

	while (*S)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
