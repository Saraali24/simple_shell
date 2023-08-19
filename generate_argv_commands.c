#include "main.h"

/**
 * my_argv - Function That generate all the arguments
 * @lineptr: pointer to string from getline
 * Return: pointer array of strings
*/

char **my_argv(char *lineptr)
{
char **argv, *my_token;
int x = 0;

argv = malloc(sizeof(char *) * (my_strlen(lineptr) + 1));

if (!argv)
perror("malloc");

my_token = my_strtok(lineptr, _DELIMITER);
while (my_token)
{
if (my_token[0] == '#')
break;
argv[x] = my_token;
my_token = my_strtok(NULL, _DELIMITER);
x++;
}

argv[x] = NULL;
return (argv);
}
