#include <stdio.h>
#include "cshell.h"

/**
 * _strcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int res = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		res = s1[i] - s2[i];
		if (res != 0)
		{
			break;
		}
	}
	return (res);
}

