#include "shell.h"
/**
 * execut_command - execut command
 * @argv: command that excuted
*/
void execut_command(char **argv)
{
	pid_t ch_pid;
	char *command = NULL;
	int status;

	if (argv)
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
			{
				wait(NULL);
			}
		}
		free(command);
		/*perror(command);*/
	}
}
