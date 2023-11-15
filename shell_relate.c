#include "simple.h"

/**
 * shell_interactive - UNIX command line interpreter
 *
 * Return: void
 */

void shell_interactive(void)
{
	char *string, **args;
	int status = -1;

	do {
		string = get_string(); /*get string from stdin = 0) */
		args = parse_string(string); /*this tokenize string */
		status = exe_com(args); /*execute our command */

		/*free all memory*/
		free(string);
		free(args);

		if (status >= 0)
		{
			exit(status);
		}
	} while (status == -1);
}
