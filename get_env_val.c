#include "shell.h"
/**
 * _getenv - get the value of an environment variable
 * @name: name of the environment variable
 * Return: value of the environment variable, or NULL if not found
 */
char *_getenv(const char *name)
{
	char **env;
	char *line;
	char *value;
	int len_name;

	if (name == NULL)
		return (NULL);
	for (env = environ; *env != NULL; env++)
	{
		line = *env;
		len_name = strlen(name);
		if (strncmp(line, name, len_name) == 0 &&
				line[len_name] == '=')
		{
			value = line + len_name + 1;
			return (value);
		}
	}
	return (NULL);
}
