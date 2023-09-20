#include "monty.h"
arg_t *args = NULL;

/**
 * main - entry point
 * @argc: the number of argument
 * @argv: the arguments
 * Return: 0(success) else error set appropriately
 */
int main(int argc, char **argv)
{
	size_t n = 0;

	arguments(argc);
	init_args();
	get_stream(argv[1]);

	while (getline(args->line, &n, args->stream) != -1)
	{
		printf("%s", args->line);
	}

	return (0);
}
