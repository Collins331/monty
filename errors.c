#include "monty.h"
/**
 * arguments - entry point
 * @argc: the arguments count
 * Return: void
 */
void arguments(int argc)
{
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
