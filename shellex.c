#include <sys/wait.h>
#include <unistd.h>
#include "cshell.h"
#include <stdio.h>

/**
 * shellex - executes arguments
 * @purse: purse of tokens
 * Return: void
 */

int shellex(char **purse)
{
	pid_t child_pid;
	char *temp;

	if (_strcmp(purse[0], "exit") == 0)
	{
		return (1);
	}
	else if (_strcmp(purse[0], "env") == 0)
	{
		_printenv();
		return (1);
	}
	if (access(purse[0], F_OK) != 0)
		temp = checkpath(purse[0]);
	else
		temp = purse[0];
	child_pid = fork();
	if (child_pid == 0)
	{
		execve(temp, purse, environ);
		perror("hsh");
		exit(0);
	}
	else if (child_pid != 0)
	{
		int status;

		wait(&status);
	}
	else
	{
		perror("hsh");
	}
return (0);
}
