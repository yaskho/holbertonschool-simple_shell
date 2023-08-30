#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

extern char **environ;
#define separator " \n\t"

char *reading(void);
char **parsing(char *readline);
int execute_command(char **tokens);
void _env(void);
char *check_path(char *command);
void free_d_p(char **p);

#endif