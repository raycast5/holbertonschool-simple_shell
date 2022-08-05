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

/**
 * str_concat - create array containing 2 concatenated strings.
 *
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: NULL if str is NULL, duplicated str if success
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2, l3;
	char *con = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
	;
	for (l2 = 0; s2[l2] != '\0'; l2++)
	;
	l3 = l1 + l2;
	con = malloc(sizeof(char) * (l3 + 2));
		if (con == NULL)
			return (NULL);
	for (i = 0; i < l1; i++)
	{
		con[i] = s1[i];
	}
	con[i] = 47;
	i++;
	for (j = 0; j < l2; j++)
	{
		con[i] = s2[j];
		i++;
	}
	con[i] = '\0';
	return (con);
}

