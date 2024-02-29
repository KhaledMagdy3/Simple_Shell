#include "shell.h"

/**
 * _strtok - function to tokenize the string
 * @str: string to tok (char *)
 * @delimiters: the char (char *)
 * Return: char *
*/

char *_strtok(char *str, const char *delimiters)
{
	return (strtok(str, delimiters));
}
