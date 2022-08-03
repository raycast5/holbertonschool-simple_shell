#ifndef CSHELL_H
#define CSHELL_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

char *readline();

char **tokenize(char *line);

void shellex(char **args, char **envp);

int _strcmp(char *s1, char *s2);

#endif
