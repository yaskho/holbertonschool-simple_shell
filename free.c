#include "shell.h"

/**
 * free_d_p - free a double pointer
 * @p: pointeur
*/
void free_d_p(char **p)
{
	int i;

	for (i = 0; p[i] != NULL; i++)
		free(p[i]);
	free(p);
}
