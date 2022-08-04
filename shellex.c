#include <sys/wait.h>
#include <unistd.h>
#include "cshell.h"

/**
 * shellex - executes arguments
 * @arg: argument vector
 * @envp: environment
 * Return: void
 */

int shellex(char **arg)
{
	pid_t child_pid;
	extern char **environ;

	if (_strcmp(arg[0], "exit") == 0)
		return (1);
	/*else if (_strcmp(arg[0], "env") == 0)*/
		

	child_pid = fork();

	if (child_pid == 0)
	{
		execve(arg[0], arg, environ);
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
