#include "shell.h"

/**
 * main - function to create a simple shell
 * Return: int
*/

int main(void)
{
	char *command = NULL;
	char **argv = NULL;
	int i;

	while (1)
	{
		prompt_line_display();
		command = get_command(command);
		argv = parse_command(command);
		execut_command(argv);
		/*free(command);*/
	}
	free(command);
	for (i = 0; argv[i] != NULL; i++)
		free(argv[i]);
	free(argv);
}
