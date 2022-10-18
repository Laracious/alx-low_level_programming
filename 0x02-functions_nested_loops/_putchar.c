#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the chaqracter c to standout
 *
 * @c: the char to print
 *
 * Return: 1
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
