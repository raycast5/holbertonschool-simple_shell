#include <sys/wait.h>
#include <unistd.h>
#include "cshell.h"

/**
 * shellex - executes arguments
 * @arg: argument vector
 * @envp: environment
 * Return: void
 */

void shellex(char **arg, char **envp)
{
	pid_t child_pid;

	if (_strcmp(arg[0], "exit") == 0)
		exit(EXIT_SUCCESS);

	child_pid = fork();

	if (child_pid == 0)
	{
		execve(arg[0], arg, envp);
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
}
