#include "simple.h"

/**
 * get_string - read a line from stdin
 *
 * Return: pointer that points to a str with the line content
 */
char *get_string(void)
{
	char *string = NULL;
	size_t buflen = 0;

	if (getline(&string, &buflen, stdin) == -1)
	{
		if (feof(stdin)) /*test for end of file */
		{
			free(string);
			exit(EXIT_SUCCESS); /* end of file */
		}
		else
		{
			free(string);
			perror("error from stdin");
			exit(EXIT_FAILURE);
		}
	}
	return (string);
}
