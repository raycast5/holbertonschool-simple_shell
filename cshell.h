#ifndef CSHELL_H
#define CSHELL_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

extern char **environ;

char *readline();

char **tokenize(char *line);

int shellex(char **arg);

int _strcmp(char *s1, char *s2);

void _printenv(void);

#endif
