#include "main.h"

/**
*_strncpy - copys strings
*@dest: destination
*@src: source
*@n: integer
*Return: to result string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0,	i = 0;
	char *temp = dest;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
