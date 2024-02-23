#include "shell.h"

/**
 * _strlen - function to calculate string length
 * @str: string (char *)
 * Return: string length (int)
*/

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
