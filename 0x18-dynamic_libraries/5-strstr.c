#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the string ro be search
 * @needle: the substring to be located
 * Return: pointer to the beginning of the located substring,
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		a = 0;

		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);
				a++;
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	}
	return ('\0');
}
