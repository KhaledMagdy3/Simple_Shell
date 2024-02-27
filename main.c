#include "shell.h"

/**
 * main - function to create a simple shell
 * Return: int
*/

int main(void)
{
	char *command = NULL;
	char **argv;
	int i;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			prompt_line_display();
		command = get_command();
		argv = parse_command(command);
		/*ex_env_handler(argv, command);*/
		execut_command(argv);
		free(command);
		for (i = 0; argv[i] != NULL; i++)
			free(argv[i]);
		free(argv);
	}
	free(command);
	for (i = 0; argv[i] != NULL; i++)
		free(argv[i]);
	free(argv);
	return (0);
}
