#ifndef SIMPLE_H
#define SIMPLE_H

/*---LIBRARIES---*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

char *get_stm(void);
#define delim "\t\r\n\a\""
extern char **environ;

int new_pd(char **args);
void shell_interactive(void);
void shell_no_interactive(void);
char *get_string(void);
char **parse_string(char *string);
int exe_com(char **args);


int own_cd(char **args);
int own_exit(char **args);
int own_env(char **args);
int own_help(char **args);

#endif
