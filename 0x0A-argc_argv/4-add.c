#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The count of command-line arguments
 * @argv: An array of strings containing arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int total = 0;
	int i, j;

	(void)argc;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j]; j++)
	{
		if (!isdigit(argv[i][j]) && argv[i][j] != '-')
		{
			printf("Error\n");
			return (1);
		}
	}
		total += atoi(argv[i]);
	}

	printf("%d\n", total);
	return (0);
}
