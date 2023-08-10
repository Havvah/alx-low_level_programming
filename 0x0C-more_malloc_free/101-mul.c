#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, 98 on incorrect number of arguments or invalid input
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	product = num1 * num2;

	printf("%lu\n", product);
	return (0);
}
