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
/* functions prototype */
int _strlen(const char *str);
char *_strcpy(char *dest, char *src);
char *_strdub(char *src);
char *_strcat(char *dest, char *src);
void _printf(const char *str);
void prompt_line_display(void);
char *get_command(char *cmnd);
char **parse_command(char *cmnd);
void execut_command(char **argv);
char *get_path(char *cmnd);

#endif /* SHELL_H */
