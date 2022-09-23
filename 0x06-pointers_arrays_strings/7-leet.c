#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: string input
 * Return: @s
 */

char *leet(char *s)
{
	int j, k = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[k] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[k] == sl[j] || s[k] == ul[j])
			{
				s[k] = n[j];
				break;
			}
		}
		k++;
	}
	return (s);
}
