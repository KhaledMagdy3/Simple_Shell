#include "shell.h"

/**
 * _strdub - function to dublicate the string
 * @src: string to dublicate (char *)
 * Return: the new string (char *)
*/

char *_strdub(char *src)
{
	char *dubl;
	size_t len;

	if (src == NULL)
		return (NULL);

	len = _strlen(src);

	dubl = malloc((sizeof(char) * len) + 1);
	if (dubl == NULL)
	{
		return (NULL);
	}

	dubl[len] = '\0';
	while (len--)
		dubl[len] = src[len];

	return (dubl);
}
