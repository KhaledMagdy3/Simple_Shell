#include "shell.h"

/**
 * ex_env_handler - function to deal with exit and env
 * @argv: array of string (char **)
 * @command: command (char *)
 * Return: int
*/

int ex_env_handler(char **argv, char *command)
{
	if (_strcmp(argv[0], "env") == 0)
	{
		get_env();
		return (1);
	}
	else if (_strcmp(argv[0], "exit") == 0)
	{
		exit_shell(argv, command);
		return (1);
	}
	return (0);
}
