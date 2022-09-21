#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: destination
*@src: source
*Return: the pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int concat = 0, concat1 = 0;

	while (*(dest + concat) != '\0')
	{
		concat++;
	}

	while (concat1 >= 0)
	{
		*(dest + count) = *(src + concat1);
		if (*(src + concat1) == '\0')
			break;
		concat++;
		concat1++
	}
	return (dest);
}
