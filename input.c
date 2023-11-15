#include "all_func.h"

/*
 * read_command: this take input from user
 *
 * @command: input
 * @size: size of input
 * Return: Nothing
 */

void read_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			print_out("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			print_out("Error from input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
