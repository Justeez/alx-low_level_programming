#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * @dest: dest pointer to char type
 * @src: string variable of char type
 * @n: unsigned int variable
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
