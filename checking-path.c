#include "shell.h"

/**
 * check_path - Check if the command exists in the PATH.
 * @command: The command to check.
 * Return: Path of the command if found, otherwise NULL.
 */
char *check_path(char *command)
{
	char *path = getenv("PATH");
	char *path_token;
	struct stat info;

	if (path == NULL)
		return (NULL);

	path_token = strtok(path, ":");

	while (path_token != NULL)
	{
		char *final_path = malloc(strlen(path_token) + strlen(command) + 2);

		if (final_path == NULL)
			return (NULL);

		strcpy(final_path, path_token);
		strcat(final_path, "/");
		strcat(final_path, command);

		if (stat(final_path, &info) == 0)
			return (final_path);

		free(final_path);
		path_token = strtok(NULL, ":");
	}

	return (NULL);
}
