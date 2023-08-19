#include "main.h"

/**
 * my_env - Function ptints environment command
 *
 * Return: function returns void.
*/

void my_env(void)
{
char **env = environ;
int l;

while ((*env))
{
l = (int)strlen(*env);
write(1, *env, l);
write(1, "\n", 1);
env++;
}
}
