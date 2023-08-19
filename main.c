#include "main.h"

/**
 * main - Function that run my shell command-line interpreter .
 *
 * @argc: The number of command-line arguments.
 *
 * @argv: Array of strings containing the command-line arguments.
 *
 * Return: function returns (0).
*/

int main(__attribute__((unused)) int argc, char *argv[])
{

if (isatty(STDIN_FILENO) == 0)

non_interactive(argv);

else

interactive(argv);

return (0);
}
