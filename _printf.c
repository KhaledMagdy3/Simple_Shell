#include "shell.h"

/**
 * _printf - function to print strings
 * @str: string (char *)
 * Return: void
*/

void _printf(const char *str)
{
	write(STDOUT_FILENO, str, _strlen(str));
}
