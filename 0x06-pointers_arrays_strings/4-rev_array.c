#include "main.h"

/**
*Reverse_array - reverses an array
*@a: array input
*@n: number of elemets in array
*Return: Always 0.
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int rev;

	while (i < n--)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n] = rev;
	}
}
