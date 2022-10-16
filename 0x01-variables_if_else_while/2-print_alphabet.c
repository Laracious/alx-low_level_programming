#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char lj;

	for (lj = 'a'; lj <= 'z'; lj++)
	{
		putchar(lj);
	}
	putchar('\n');
	return (0);
}
