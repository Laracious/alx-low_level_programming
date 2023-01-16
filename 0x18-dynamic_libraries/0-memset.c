#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: string
 * @b: a character
 * @n: an integer
 * description _memset: over there
 * Return: A string
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
