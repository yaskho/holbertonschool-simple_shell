#include "shell.h"

/**
 * main - simple shell entry point
 * Return: Always 0.
 */
int main(void)
{
	char *line, **args;
	int status;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");

		line = reading();
		args = parsing(line);

		if (*args != NULL)
		{
			if (strcmp(args[0], "\0") == 0)
			{
				free(line);
				continue;
			}
			if (strcmp(args[0], "exit") == 0)
			{
				free(line);
				free_d_p(args);
				exit(1);
			}
			else if (strcmp(args[0], "env") == 0)
			{
				_env();
				continue;
			}
			else
			{
				if (strcmp(args[0], "/") == 0)
				{
					args[0] = check_path(args[0]);
				}

				status = execute_command(args);
			}

		}

		free(line);
		free_d_p(args);
	}

	return (status);
}
