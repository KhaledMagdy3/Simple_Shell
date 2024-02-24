#include "shell.h"
/**
 * execut_command - execut command
 * @cmnd: command that excuted
*/
void execut_command(char *cmnd)
{
	pid_t ch_pid;
	char *args[2];
	int status;

	/*creat a child process*/
	ch_pid = fork();
	if (ch_pid == -1)
	{
		perror("fork");
		exit(0);
	}
	else if (ch_pid == 0)
	{
		args[0] = cmnd;
		args[1] = NULL;
		/*execut the command*/
		status = execve(args[0], args, NULL);
		if (status == -1)
		{
			perror(cmnd);
		}
	}
	else
	{
		wait(NULL);
	}
}
