#include "simple.h"

/**
 * main - function that checks if our shell is called
 *
 * Return: 0 on success
 */
int main(void)
{
	if (isatty(STDIN_FILENO) != 1)
	{
		shell_no_interactive();

	}
	else
	{
		shell_interactive();
	}
	return (0);
}
