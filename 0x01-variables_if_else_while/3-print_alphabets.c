#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and uppercase
 *
 * Return: Always 0
 */
int mind(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);

	putchar('\n');
	return (0);
}
