#include <stdio.h>
#include <stdlib.h>

/**
 *main-prototype
 *Return: 0
 */


int main(void)
{
	char *line = NULL;
	size_t size = 0;
	ssize_t len;

	while (1)
	{
	printf("$ ");
	fflush(stdout); /*flush stdout to ensure prompt is printed before input*/

	/*read input line from user*/
	len = getline(&line, &size, stdin);

	/*error or end-of-file*/
	if (len == -1)
	{
		break;
	}
	/*print the input line*/
	printf("%s", line);
	}

	/*cleanup*/
	free(line);
	line = NULL;
	return (0);
}
