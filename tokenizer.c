#include <string.h>
#include <stdio.h>
#include "cshell.h"

char **tokenize(char *line)
{
	int i;
	int bufsize = 32;
	char **purse;

	char *delim = " \t\r\n";
	char *token = strtok(line, delim);

	purse = malloc(sizeof(char) * bufsize);
	if (!purse)
	{
		perror("Failed to allocate memory");
		exit(1);
	}

	for (i = 0; token != NULL; i++)
	{
		purse[i] = token;
	
		if (i >= bufsize)
		{
			bufsize *= 2;
			purse = realloc(purse, sizeof(char) * bufsize);
		}
		token = strtok(NULL, delim);
	}
	purse[i] = NULL;
	return (purse);
}


