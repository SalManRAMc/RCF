#include <stdio.h>


/**
 * main - tests argc and argv, explaining what they are
 *
 * @argc: number of arguments the program takse
 * @argv: array of strings that points to each argument passed to program
 *
 */

int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("Argument in argv[%d} is = %s\n", i, argv[i]);
	}
}
