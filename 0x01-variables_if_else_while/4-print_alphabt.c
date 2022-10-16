#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: print the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
