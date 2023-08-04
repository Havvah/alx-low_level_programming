#include <string.h>

/**
* _strncat - Concatenates two strings, at most n bytes from src.
* @dest: Destination string
* @src: String to append
* @n: Max length of resulting string
* Return: Pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
