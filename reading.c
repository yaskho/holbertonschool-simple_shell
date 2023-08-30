#include "simple_shell.h"
/**
 * reading - get a line from stdin
 * Return: reading
*/
char *reading(void)
{
    char *input = NULL;
    size_t bufsize = 0;
    ssize_t input_len;
    input_len = getline(&input, &bufsize, stdin);
    if (input_len == -1)
    {
        if (feof(stdin))
        {
            free(input);
            exit(0);
        }
        perror("getline");
        free(input);
        exit(ERROR)
    }
    if (input[input_len - 1] == '\n')
        input[input_len - 1] = '\0';
    return (input);
}

