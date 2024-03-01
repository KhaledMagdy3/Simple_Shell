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
	token = _strtok(cmnd_cpy, delim);
	while (token != NULL)
	{
		token = _strtok(NULL, delim);
		argc++;
	}
	argc++;
	argv = malloc(sizeof(char *) * argc);/*need to be free*/
	if (argv == NULL)
	{
		perror("malloc");
		exit(0);
	}
	token = _strtok(cmnd, delim);
	while (token != NULL)
	{
		argv[i] = malloc(sizeof(char) * (_strlen(token) + 1));
		_strcpy(argv[i], token);
		token = _strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;
	free(cmnd_cpy);
	/*free(cmnd);*/
	/*free(argv);*/
	return (argv);
}
