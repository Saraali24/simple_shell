#include "main.h"
/**
 * my_exit - Function that used to exit from the shell
 * @lineptr: the command line
 * @stat: Status of the process
 * @counter: Count the number of commands
 * @programe_name: name of the programe
 * @lin: the command
 * Return: returns exit status
*/
int my_exit(char *lineptr, int *stat, int counter,
char *programe_name, char *lin)
{
int ex_stat = 0, ln, valid_num = 1, i;
char *str;
char *command_copy;
command_copy = strdup(lineptr);
command_copy = my_strtok(command_copy, " ");
str = my_strtok(NULL, " ");
if (!str)
{
free(lin);
free(command_copy);
exit(*stat);
}
ln = my_strlen(str);
if (str != NULL)
{
if (str[0] == '-')
valid_num = 0;
for (i = 0; i < ln; i++)
{
if (!(str[i] >= '0' && str[i] <= '9'))
{
valid_num = 0;
break;
}
}
if (valid_num)
{
ex_stat = atoi(str);
free(lineptr);
free(command_copy);
exit(ex_stat);
}
else
{
*stat = 2;
my_print_errors(programe_name, counter, *stat, lineptr);
free(command_copy);
}
}
return (ex_stat);
}
