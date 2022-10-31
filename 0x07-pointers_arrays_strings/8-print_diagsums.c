#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: The matrix of integers
 * @size: the size of the matrix
 * description: prints the sum
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[b];
		a += size;
	}

	a -= size;

	for (b = 0; b < size; b)
	{
		sum2 += a[b];
		a -= size;
	}

	printf("%d\n, %d\n", sum1, sum2);
}
