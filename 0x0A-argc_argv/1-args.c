#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: - the count of command-line arguments
 * @argv: - An array of strings containing arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
