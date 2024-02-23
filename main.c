#include "shell.h"

/**
 * main - function to create a simple shell
 * Return: int
*/

int main(void)
{
	char *command = NULL;

	while (1)
	{
		prompt_line_display();
		get_command(command);
	}
}
