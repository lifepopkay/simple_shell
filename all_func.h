#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>


void alx_prompt(void);
void print_out(const char *command);
void take_command(const char *command);
void read_command(char *command, size_t size);

#endif

