#include "shell.h"

/**
 * main - function to create a simple shell
 * Return: int
*/

int main(void)
{
	char *command = NULL;
	char **argv = NULL;
	int i, st;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			prompt_line_display();
		command = get_command();
		argv = parse_command(command);
		st = ex_env_handler(argv, command);
		if (st == 0)
			execut_command(argv);
		if (command)
		{
			free(command);
			for (i = 0; argv[i] != NULL; i++)
				free(argv[i]);
			free(argv);
		}
	}
	free(command);
	for (i = 0; argv[i] != NULL; i++)
		free(argv[i]);
	free(argv);
	return (0);
}
