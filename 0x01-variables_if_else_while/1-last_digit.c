#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: assign a random number to the variable n
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	printf("Last digit of %d is %d ", n, k);
	if (k > 5)
	{
		printf("and is greater than 5");
	}
	if (k == 0)
	{
		printf("and is 0");
	}
	if (k < 6 && k != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
