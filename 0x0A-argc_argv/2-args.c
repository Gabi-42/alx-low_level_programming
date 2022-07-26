#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments.
 *
 * Return: returns 0 on Success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
