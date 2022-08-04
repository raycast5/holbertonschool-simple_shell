#include <sys/wait.h>
#include <unistd.h>
#include "cshell.h"

/**
 * shellex - executes arguments
 * @purse: purse of tokens
 * Return: void
 */

int shellex(char **purse)
{
	pid_t child_pid;
	char *temp = purse[0];

	if (_strcmp(purse[0], "exit") == 0)
	{
		return (1);
	}
	else if (_strcmp(purse[0], "env") == 0)
	{
		_printenv();
		return (1);
	}

	child_pid = fork();

	if (child_pid == 0)
	{
		execve(temp, purse, environ);
		perror("hsh");
		exit(1);
	}
	else if (child_pid > 0)
	{
		int status;

		do {
			waitpid(child_pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	else
	{
		perror("hsh");
	}
return (0);
}
