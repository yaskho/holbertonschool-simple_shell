#include "shell.h"
/**
 *execute_command - function to execute
 *@tokens: vector
 *Return: the exit status
*/
int execute_command(char **tokens)
{
	int status = 0;

	pid_t pid;

	pid = fork();

	if (pid == 0)
	{
		if (execve(tokens[0], tokens, environ) == -1)
		{
			perror("execve");
			free_d_p(tokens);
			exit(1);
		}
	}
	else if (pid < 0)
	{
		perror("fork");
		exit(1);
	}
	else
	{
		wait(NULL);
	}

	return (status);
}
