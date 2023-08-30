#ifndef SHELL_H
#define SHELL_H

#define BUFSIZE 1024

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

extern char **environ;

char *reading(void);
char **parse_the_line(char *, const char *);
int execution(char **, char *);
void environment(void);
char *check_path(char *);
void free(char **);

#endif