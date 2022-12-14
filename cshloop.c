#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "cshell.h"
#include <unistd.h>

/**
 * main - main function of program
 * Return: 0 if success
 */

int main(void)
{
	int icheck, flag;
	char *buffer;
	size_t bufsize;
	char **purse = NULL;

	icheck = isatty(STDIN_FILENO);
	while (true)
	{
		buffer = NULL;
		bufsize = 0;
		if (icheck == 1)
			printf("$ ");
		flag = getline(&buffer, &bufsize, stdin);
		if (flag == EOF)
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		purse = tokenize(buffer);
		if (purse[0])
		{
			if (shellex(purse) == 1)
			{
				icheck = 0;
			}
		}
		free(buffer);
		buffer = NULL;
		free(purse);
		purse = NULL;

		if (icheck != 1)
			exit(0);
	}
return (0);
}
