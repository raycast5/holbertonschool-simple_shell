#include <stdio.h>
#include <stdlib.h>
#include "cshell.h"
#include <errno.h>

char *readline()
{
	int flag;
	char *buffer = NULL;
	size_t bufsize = 0;

	flag = getline(&buffer, &bufsize, stdin);
	if (flag == EOF)
		return (NULL);

	return (buffer);
}
