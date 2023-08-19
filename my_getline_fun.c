#include "main.h"

/**
 * my_getline - Function that read line from file or user
 * @lineptr: pointer to string
 * @n: pointer to size
 * @stream: pointer to stream
 * Return: function returns numbers of read charecters.
*/

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream)
{
return (getline(lineptr, n, stream));
}

/**
 * my_strtok - function tokenization the command
 * @string: string is the command line
 * @delimiters: delimiters
 * Return: function return pointer to the token
*/

char *my_strtok(char *string, const char *delimiters)
{
return (strtok(string, delimiters));
}
