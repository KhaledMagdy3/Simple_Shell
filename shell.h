#ifndef SHELL_H
#define SHELL_H

/* libraries we will need */
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/wait.h>
#include <sys/stat.h>
/*global variable*/
extern char **environ;
/* functions prototype */
int _strlen(const char *str);
char *_strcpy(char *dest, char *src);
char *_strdub(char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
void _printf(const char *str);
char *_strtok(char *str, const char *delimiters);
void prompt_line_display(void);
char *get_command();
char **parse_command(char *cmnd);
int ex_env_handler(char **argv, char *command);
void get_env(void);
void exit_shell(char **argv, char *line);
void execut_command(char **argv);
char *_getenv(const char *name);
char *get_path(char *cmnd);

#endif /* SHELL_H */
