#include "simple.h"
/**
 * get_stm - read a line from the stream
 * Return: pointer that points the the read line
 */
char *get_stm(void)
{
	int buflen = 1024, i = 0, c;
	char *line = malloc(sizeof(char) * buflen);

	if (line == NULL)
	{
		fprintf(stderr, "allocation error in get_stm");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		c = getchar();
		if (c == EOF)
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		else if (c == '\n')
		{
			line[i] = '\0';
			return (line);
		}
		else
			line[i] = c;
		i++;
		if (i >= buflen)
		{
			buflen += buflen;
			line = realloc(line, buflen);
			if (line == NULL)
			{
				fprintf(stderr, "reallocation error in get_stm");
				exit(EXIT_FAILURE);
			}
		}
	}
}
