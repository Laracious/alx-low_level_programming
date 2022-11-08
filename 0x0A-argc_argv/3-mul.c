#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of twpo integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b, diff;

	if (argc != 3)
	{
		printf("false\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	diff = a * b;

	printf("%i\n", diff);
	return (0);

}
