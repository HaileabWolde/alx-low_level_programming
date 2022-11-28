#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

char *read_line()
{
	char *lineptr = NULL;

	size_t buf = 0;

	getline(&lineptr, &buf, stdin);

	return (lineptr);
}

char **pars(char *p)
{
	int i = 0, size = 20;

	char *delim = " \t\n\r";

	char *tok;

	char **token;

	token = malloc(size * sizeof(char *));

	tok = strtok(p, delim);

	while (tok)
	{
		token[i]= tok;
		
		i++;

		if (i >= size)
		{
			size += size;

			token = realloc(token, size * sizeof(char *));
		}
		
		tok = strtok(NULL, delim);
	}

	token[i] = NULL;

	return (token);
}

void execute(char **arg)
{
	pid_t pid;

	int status;

	char src[20] = "/usr/bin";

	char *env[] = {NULL};

	strcat(src, arg[0]);

	pid = fork();

	if (pid == 0)
	{
		if (execve(src, arg, env) == -1)
		{
			printf("this is error");
		}

		free(arg);
	}

	else if (pid < 0)
	{
		printf("Error");
	}

	else
	{
		wait(&status);
	}
}

int main(void)
{
	while(1)
	{
		char *line;

		char **parser;

		line = read_line();

		parser = pars(line);

		while (parser[0] != NULL)
		{
			execute(parser);
		}

		free(line);

		free(parser);
	}
}
