#include "shell.h"

/**
 * parse_command - function to parse astring
 * @cmnd: the string (char *)
 * Return: array of string (char *)
*/

char **parse_command(char *cmnd)
{
	int i = 0;
	int argc = 0;
	char **argv = NULL;
	char *cmnd_cpy = NULL;
	char *token = NULL;
	char *delim = " ";

	if (cmnd == NULL)
		return (NULL);

	/*if we need the length of argument*/
	cmnd_cpy = _strdub(cmnd);/*need to be free*/
	token = strtok(cmnd_cpy, delim);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		argc++;
	}

	argv = malloc(sizeof(char *) * argc);/*need to be free*/
	if (argv == NULL)
	{
		perror("malloc");
		exit(0);
	}

	token = strtok(cmnd, delim);
	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;

	free(cmnd_cpy);
	free(cmnd);
	free(argv);

	return (argv);
}
