#include "shell.h"
/**
 * execut_command - execut command
 * @argv: command that excuted
 * @cmnd: cmnd will be freed if command not found
*/
void execut_command(char **argv, char *cmnd)
{
	pid_t ch_pid;
	char *command = NULL;
	int status, i;

	if (*argv)
	{
		command = get_path(argv[0]);
		if (command)
		{
			/*creat a child process*/
			ch_pid = fork();
			if (ch_pid == -1)
			{
				perror("fork");
				exit(0);
			}
			else if (ch_pid == 0)
			{
				/*execut the command*/
				status = execve(command, argv, NULL);
				if (status == -1)
				{
					perror(command);
				}
			}
			else
				wait(NULL);
		}
		else
		{
			fprintf(stderr, "./hsh: 1: %s: not found\n", argv[0]);
			free(command);
			free(cmnd);
			for (i = 0; argv[i] != NULL; i++)
				free(argv[i]);
			free(argv);
			exit(127);
		}
		free(command);
	}
}
