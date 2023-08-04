#include "main.h"

/**
 * _memcpy - copies memeory area
 * @dest: destination location
 * @src: source location
 * @n: number of bytes to copy
 * Return:cpointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0 ; q < n ; q++)
		dest[q] = src[q];
	return (dest);
}
