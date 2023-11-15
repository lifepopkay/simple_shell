#include "all_func.h"

/*
 * main - simple shell function
 *
 * Return: 0
 */

int main(void)
{
	char string[200];

	while (1)
	{
		alx_prompt();
		read_command(string, sizeof(string));
		take_command(string);
	}
}
