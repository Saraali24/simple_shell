#include "main.h"

/**
 * get_total_path - Function used to get the command path
 * @lineptr: the command from user
 * Return: return the addres of the command path
 */

char *get_total_path(char *lineptr)
{
char *command_token, *line_copy, *path_copy, *path_value, *command_path;
int len_command = 0, len_token = 0;

path_value = my_getenv("PATH");
path_copy = my_strdup(path_value);
line_copy = my_strdup(lineptr);
line_copy = my_strtok(line_copy, _DELIMITER);
if ((access(line_copy, F_OK) == 0) && ((line_copy[0] == '/') ||
(line_copy[1] == '/') || (line_copy[2] == '/')))
{
free(path_copy);
return (line_copy);
}
len_command = (int)my_strlen(line_copy);
command_token = my_strtok(path_copy, ":");
len_token = (int)my_strlen(command_token);
while (command_token)
{
command_path = malloc(len_command + len_token + 2);
my_strcpy(command_path, command_token);
my_strcat(command_path, "/");
my_strcat(command_path, line_copy);
if (access(command_path, F_OK) == 0)
{
free(line_copy);
free(path_copy);
return (command_path);
}
free(command_path);
command_token = my_strtok(NULL, ":");
if (!command_token)
{
free(line_copy);
free(path_copy);
break;
}
len_token = (int)my_strlen(command_token);
}
return (NULL);
}
