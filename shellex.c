#include <sys/wait.h>
#include <unistd.h>
#include "cshell.h"

void shellex(char **args, char **envp)
{

	/*const char *path = "bin/";*/

	pid_t child_pid = fork();

	if (child_pid == 0)
	{
		execve(args[0], args, envp);
		perror("hsh");
		exit(1);
    }
	else if (child_pid > 0)
	{
		int status;
		do
		{
			waitpid(child_pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
	else
	{
        perror("hsh");
    }
}
