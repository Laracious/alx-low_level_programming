#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and uppercase
 *
 * Return: 0
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);

	putchar('\n');
	return (0);
}
