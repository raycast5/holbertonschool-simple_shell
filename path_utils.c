#include "cshell.h"
#include <stdio.h>
#include <string.h>

/**
 * _getenv - gets env variable
 * @arg: line
 * Return: map
 */

char *_getenv(char *arg)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (_strstr(environ[i], arg) != 0)
		{
			return (environ[i]);
		}
	}
return (0);
}

/**
 * splitpath - tokenizes the path
 * @line: line to be tokenized
 * Return: map
 */

char **splitpath(char *line)
{
	int i;
	int bufsize = 150;
	char **map;

	char *delim = " :=\t\r\n";
	char *paths;

	paths  = strtok(line, delim);

	map = malloc(sizeof(char) * bufsize);
	if (!map)
	{
		perror("Failed to allocate memory");
		exit(1);
	}

	for (i = 0; paths != NULL; i++)
	{
		map[i] = paths;

		if (i >= bufsize)
		{
			bufsize *= 2;
			map = realloc(map, sizeof(char) * bufsize);
		}
		paths = strtok(NULL, delim);
	}
	map[i] = NULL;
	return (map);
}









