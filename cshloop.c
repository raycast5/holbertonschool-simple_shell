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
	char *buffer = NULL;
	size_t bufsize = 0;
	char **purse;

	icheck = isatty(STDIN_FILENO);
	while (true)
	{
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
		free(purse);
		free(buffer);

		if (icheck != 1)
			break;
	}
return (0);
}
