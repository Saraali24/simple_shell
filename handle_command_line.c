#include "main.h"

/**
 * myhandle_new_line - Function handles the line that user enters
 * @line: Take the line from getline function
 * Return: The handled string without new line(\n)
 */

char *myhandle_new_line(char *line)
{
int len, i = 0;

while (line[i])
{

if (line[i] != ' ')
{
line += i;
break;
}
i++;
}
len = (int)my_strlen(line);

if (len == 1 && line[0] == '\n')
{
return (line);
}
len = (int)my_strlen(line);

if (line[len - 1] == '\n')
line[len - 1] = '\0';
return (line);
}
