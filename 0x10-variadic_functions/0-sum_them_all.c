#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum up a variable number of integers
 * @n: number of integers to be summed
 * @..." integers to be summed
 * Return: if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);

	}

	int sum = 0;
	va_list args;

	va_starts(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
