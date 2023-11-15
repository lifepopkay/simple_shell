#include "simple.h"

/**
 * shell_no_interactive - unix command line interpreter
 *
 * Return: void
 */
void shell_no_interactive(void)
{
	char *str, **args;
	int status = -1;

	do {
		str = get_stm();
		args = parse_string(str);
		status = exe_com(args);
		free(str);
		free(args);

		if (status >= 0)
			exit(status);
	} while (status == -1);
}
