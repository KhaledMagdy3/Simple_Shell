#include "shell.h"

/**
 * get_env - function to print env
 * Return: void
*/

void get_env(void)
{
	char **env = environ;
	int i;

	for (i = 0; env[i] != NULL; i++)
	{
		_printf(env[i]);
		_printf("\n");
	}
}
