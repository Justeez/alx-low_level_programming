#include "main.h"

/**
*reverse_array - function that reverses an array of integers
* @a: array input
* @n: number of elemets in array
* Return: Always 0.
*/

void reverse_array(int *a, int n)
{

	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
