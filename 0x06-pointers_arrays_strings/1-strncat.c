#include "main.h"

/**
*_strncat - concatenate two strings
*@dest: destination
*@src: source
*@n: integer
*Return: to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
