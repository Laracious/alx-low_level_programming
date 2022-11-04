#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
/*Declaring variable*/
	int count = 0;

	if (argc > 0)
	{
/*WHILE - prints each arguments*/
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	}
	return (0);
}
