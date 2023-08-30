#include "shell.h"

/**
 * parsing - parses the input line into tokens.
 * @readline: the input line to parse
 * Return: array of tokens.
 */
char **parsing(char *readline)
{
	int i = 0, size = 1024;
	char **tokens = (char **)malloc(size * sizeof(char *));
	char *token = NULL;

	if (!tokens)
	{
		perror("malloc");
		return (NULL);
	}

	token = strtok(readline, separator);
	while (token != NULL)
	{
		tokens[i] = strdup(token);
		if (!tokens[i])
		{
			perror("malloc");
			free_d_p(tokens);
			return (NULL);
		}
		i++;
		token = strtok(NULL, separator);
	}
	tokens[i] = NULL;

	return (tokens);
}
