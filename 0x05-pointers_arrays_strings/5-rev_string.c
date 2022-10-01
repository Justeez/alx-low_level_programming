#include "main.h"

/**
 * rev_string -  function that reverses a string
 *
 *  @s: char pointer
 */

void rev_string(char *s)
{
	int count;
	int str_len;
	char temp;

	count = 0;

	while (*(s + count) != '\0')
		count++;

	str_len = count;

	for (count = str_len - 1; count >= (str_len / 2); count--)
	{
		temp = s[count];
		s[count] = s[str_len - count - 1];
		s[str_len - count - 1] = temp;
	}
}
