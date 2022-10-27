#include "main.h"

/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int index  = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; scr[index]; index++)
		dest[dest_len++] = scr[index];

	return (dest);
}
