#include <stdio.h>

/**
 *main-prototype
 *@ac:argument 1
 *@av:argument 2
 *Return: 0
 */


int main(int ac, char **av)
{
	int i = 0;

/*Use ac to print the number of arguments*/

	printf("Number of arguments: %d\n", ac);

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
