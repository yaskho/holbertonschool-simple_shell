#include "shell.h"
/**
 * reading - get a line from stdin
 * Return: reading
*/
char *reading(void)
{
	char *input = NULL;
	size_t bufsize;
	ssize_t input_len;

	input_len = getline(&input, &bufsize, stdin);

	if (feof(stdin))
		{
			free(input);
			exit(0);
		}
	if (input_len == -1)
	{
		perror("getline");
		free(input);
		exit(1);
	}

	return (input);
}

