#include "all_func.h"

/*
 * take_command -  create the process for execution
 *
 * @command: the string of command
 * Return: nothing
 */

void take_command(const char *command)
{
	pid_t c_pid;

	c_pid = fork();

	if (c_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (c_pid == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
