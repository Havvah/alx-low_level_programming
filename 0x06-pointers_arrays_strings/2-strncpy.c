#include <string.h>

/**
* _strncpy - Copies at most n bytes from src to dest.
* @dest: Destination string
* @src: String to copy
* @n: Max number of bytes to copy
* Return: Pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
