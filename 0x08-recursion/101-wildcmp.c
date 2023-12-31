#include "main.h"

/**
 * wildcmp - Compare string with wildcard
 * @s1: pointers to string params
 * @s2: pointers to string params
 * Return: 1 if strings match with wildcards, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	if (*s2 == '\0')
		return (1);
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1));
	return (0);
	}

	if (*s2 == '*')
	{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}

