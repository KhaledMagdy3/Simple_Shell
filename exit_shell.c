#include "shell.h"

/**
 * exit_shell - function to exit when enter exit
 * @argv: array of string (char **)
 * @line: line (char *)
 * Return: int
*/

void exit_shell(char **argv, char *line)
{
	int i;

	free(line);
	for (i = 0; argv[i] != NULL; i++)
	{
		free(argv[i]);
	}
	free(argv);
	exit(0);
}
