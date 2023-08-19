#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#include <stdbool.h>

#define _DELIMITER " \t\r\n\a\""

/*env command*/
void my_env(void);
char *my_getenv(char *nameptr);
extern char **environ;
int my_env_builtin(const char *nameptr, const char *val);

/*exit command*/
int my_exit(char *lineptr, int *stat, int counter,
char *programe_name, char *lin);

/*Excution commands*/
char *myhandle_new_line(char *line);
int my_builtin_command(char *programe_name, char *lineptr,
int *stat, int counter, char *lin);
char *get_total_path(char *lineptr);
char **my_argv(char *lineptr);
int my_excut(char *user_cmd, char **argv, char *env[], int *stat);
void myexcute_notFound(char *lineptr,
char **command_argv,
char *envi[], int *stat);

/*Handeled functions*/
char *my_strdup(char *string);
void my_strcat(char *string1, const char *string2);
int my_strlen(char *p);
char *my_strcpy(char *dest, char *src);
int my_strcmp(char *string1, char *string2);
int my_atoi(char *string);
char *myprint_num(int num);

/*non,interactive modes*/
void my_non_interactive_mode(char **argv);
void my_interactive_mode(char **argv);

/*Errors*/
void my_print_errors(char *prog_name, int counter, int stat, char *lineptr);
void my_exit_error(char *prog_name, char *counter, char *lineptr);
void my_command_error(char *prog_name, char *counter, char *lineptr);
void my_path_errors(char *prog_name, char *counter, char *lineptr);

/*Advanced functions*/
ssize_t my_getline(char **lineptr, size_t *n, FILE *stream);
char *my_strtok(char *string, const char *delimiters);


#endif
