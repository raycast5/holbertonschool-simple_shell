#ifndef CSHELL_H
#define CSHELL_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

extern char **environ;

char *readline();

char **tokenize(char *line);

int shellex(char **purse);

int _strcmp(char *s1, char *s2);

void _printenv(void);

char *_strstr(char *haystack, char *needle);

char *_getenv(char *arg);

char *str_concat(char *s1, char *s2);

char *checkpath(char *command);

char **splitpath(char *line);

#endif
