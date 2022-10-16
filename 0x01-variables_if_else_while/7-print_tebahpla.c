#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
