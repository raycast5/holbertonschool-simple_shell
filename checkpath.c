#include "cshell.h"
#include <stdio.h>
#include <unistd.h>

/**
 * checkpath - checks if received command has a valid path
 * @command: - command to be checked for validity
 * Return: path of command if found, otherwise 0
 */

char *checkpath(char *command)
{
	int i, flag = 0;
	char **paths = NULL;
	char *string = NULL;
	char *res = NULL;

	string = _getenv("PATH");
	paths = splitpath(string);
	for (i = 1; paths[i] != NULL; i++)
	{
		res = str_concat(paths[i], command);
		if (access(res, F_OK) == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		free(paths);
		return (res);
	}
	free(res);
	res = NULL;
	free(paths);
	paths = NULL;
return (NULL);
}
