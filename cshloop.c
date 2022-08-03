#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "cshell.h"
#include <unistd.h>

int main(int ac, char **av, char **envp)
{
	int icheck;
	char *line;
	char **purse;

	(void)ac;
	(void)av;

	icheck = isatty(STDIN_FILENO);
	while (true)
	{
		if (icheck == 1)
			printf("$ ");
		line = readline();
			if (!line)
			{
				free(line);
				printf("\n");
				exit(EXIT_SUCCESS);
			}
		purse = tokenize(line);

		if (purse[0])
			shellex(purse, envp);

		free(purse);
		free(line);
		
		if (icheck != 1)
			break;
	}
return (0);
}
