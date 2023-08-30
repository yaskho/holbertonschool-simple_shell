#include "simple_shell.h"
/**
 *execution -function to execute
 *@tokens: vector
 *@path: path of command
 *Return: the exit status
*/
int execution(char **tokens, char *path)
{
    int status = 0;
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {
            if (execve(path, tokens, environ) == -1)
            {
                perror("execve");
                exit(ERROR);
            
            }
    }
    else if (pid < 0)
    {
        perror("fork")
        exit(ERROR)
    }
    else
    {
        wait(&status);
        if (WIFEXITED(status))
            status = WEXITSTATUS(status);

    }
    
    return (status);
}
