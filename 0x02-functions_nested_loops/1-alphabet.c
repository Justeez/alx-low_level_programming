#include "main.h"
/**
 * main - void print_alphabet - function to print abc
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');

}
