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

/**
 * _strstr - function finds the first occurrence
 * of the substring needle in the string haystack
 * @needle: the substring to be found
 * @haystack: the string to find @needle in
 * Return: the beginning of @needle in @haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, length, temp, count;

	for (length = 0; needle[length] != '\0'; length++)
	{
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		temp = i;
		count = 0;
		for (j = 0; j < length; j++)
		{
			if (haystack[temp] == needle[j])
			{
				temp++;
				count++;
			}
		}
		if (count == length)
		{
			return (haystack + i);
		}
	}
return (0);
}
