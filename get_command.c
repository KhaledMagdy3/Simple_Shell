#include "shell.h"

/**
 * get_command - function for user to enter command
 * Return: command (char *)
*/

char *get_command()
{
	char *cmnd = NULL;
	ssize_t entered;
	size_t i = 0;

	entered = getline(&cmnd, &i, stdin);

	/*end of file or (ctrl + D)*/
	if (entered == -1)
	{
		/*_printf("\n");*/
		free(cmnd);
		exit(0);
	}

	/*if user enter blank line return NULL*/

	cmnd[entered - 1] = '\0';
	return (cmnd);
}
