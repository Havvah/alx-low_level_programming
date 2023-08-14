#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the name of the file it was compiled from.
 * The filename is dynamically inserted into the output message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s", __FILE__);
	return (0);
}

