#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The count of command-line arguments
 * @argv: An array of strings containing arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
