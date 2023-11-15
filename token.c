#include "simple.h"

/**
 * parse_string - split a string into multiple strings
 * @string: string to be splited
 * Return: pointer that points to the new array
 */
char **parse_string(char *string)
{
	int buflen = 64, i = 0;
	char **tks = malloc(sizeof(char *) * buflen);
	char *tk;

	if (!tks)
	{
		fprintf(stderr, "allocation error in parse_string: tks\n");
		exit(EXIT_FAILURE);
	}
	tk = strtok(string, delim);
	while (tk != NULL)
	{
		if (tk[0] == '#')
			break;
		tks[i] = tk;
		i++;
		if (i >= buflen)
		{
			buflen += buflen;
			tks = realloc(tks, buflen * sizeof(char *));
			if (!tks)
			{
				fprintf(stderr, "reallocation error in parse_string: tks");
				exit(EXIT_FAILURE);
			}
		}
		tk = strtok(NULL, delim);
	}
	tks[i] = NULL;
	return (tks);
}
