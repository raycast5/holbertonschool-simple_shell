#include "cshell.h"
#include <stdio.h>

char *_getenv(char *arg)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (_strstr(environ[i], arg) != 0)
		{
			printf("%s\n", environ[i]);
		}
	}
return (0);
}

int main(void)
{
	_getenv("PATH");
return (0);
}
