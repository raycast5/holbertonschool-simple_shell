#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "cshell.h"
#include <unistd.h>

int main(int ac, char **av, char **envp)
{
	int icheck, flag;
	char *buffer = NULL;
	size_t bufsize = 0;
	char **purse;

	(void)ac;
	(void)av;

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
			shellex(purse, envp);
		
		free(purse);
		free(buffer);
		
		if (icheck != 1)
			break;
	}
return (0);
}
