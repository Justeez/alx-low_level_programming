#include <stdio.h>

/**
 * main - print lowercase and uppercase alphabets a-zA-Z using putchar
 * Return: Always: 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*lower case*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*upper case*/
		putchar(upper);
		upper++;

	putchar('\n');
	return (0);

}
