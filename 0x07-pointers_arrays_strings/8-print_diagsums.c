#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * of integers.
 * @a: The matrix of integers.
 * @size: the size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}
	printf("%i, %i\n", s1, s2);
}
