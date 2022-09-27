#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string pointer to char type
 * @accept: consist of bytes
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, k, flag;

	j = 0;

	while (*(s + j) != '\0')
	{
		k = 0;
		flag = 1;

		while (*(accept + k) != '\0')
		{
			if (*(s + j) == *(accept + k))
			{
				flag = 0;
				break;
			}
			k++;
		}
		if (flag == 1)
			break;
		j++;
	}

	return (j);
}
