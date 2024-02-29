#include "shell.h"

/**
 * _strtok - function to tokenize yhe string
 * @str: string to tok (char *)
 * @delimiters: the char (char *)
 * Return: char *
*/

char *_strtok(char *str, char *delimiters)
{
	return (strtok(str, delimiters));
}
