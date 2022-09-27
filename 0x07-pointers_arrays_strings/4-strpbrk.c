#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string pointer to char type
 * @accept: consist only of bytes
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int j, k;

	j = 0;

	while (*(s + j) != '\0')
	{
		k = 0;
		while (*(accept + k) != '\0')
		{
			if (*(s + j) == *(accept + k))
				return (s + j);
			k++;
		}
		j++;
	}

	return ('\0');

}
