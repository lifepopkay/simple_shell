#include "all_func.h"

/*
 * print_out - print inputs
 */

void print_out(const char *command)
{
	write(1, command, strlen(command));
}

