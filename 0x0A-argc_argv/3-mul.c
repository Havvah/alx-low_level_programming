#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The count of command-line arguments
 * @argv: An array of strings containing arguments
 *
 * Return: 1 if not enough arguments, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}

