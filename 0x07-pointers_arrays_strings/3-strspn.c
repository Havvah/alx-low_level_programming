#include "main.h"

/**
 * _strspn - get the lenght of a prefix substring
 * @s: string to search from
 * @accept: string to search
 * Return: number of char matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int q, k;

	for (q = 0 ; s[q] != '\0' ; q++)
	{
		for (k = 0 ; s[q] != accept[k] ; k++)
		{
			if (accept[k] == '\0')
				return (q);
		}
	}
	return (0);
}
