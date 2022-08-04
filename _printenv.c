#include <stdio.h>
#include "cshell.h"

/**
 * _printenv - prints the environ
 * Return: Nothing
 */

void _printenv(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
	}
}
