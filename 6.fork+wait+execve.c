#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - exercise: fork + wait + execve
 *
 * Return: Always 0
 */

int main(void)

{
	int i;
	pid_t pid;

	for (i = 0; i < 5; i++)
	{
		pid = fork();

		if (pid < 0)
		{
			perror("fork");
			exit(EXIT_FAILURE)
		}
		else if (pid == 0)
		{
			execl("/bin/ls", "ls", "-l", "/tmp", (char *)NULL);
			perror("execl");
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(NULL);
		}
	}
	return (0);
}
