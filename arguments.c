#include "monty.h"
/**
 * arguments - entry point
 * @ac: the number of argument
 * Return: nothing
 */
void arguments(int ac)
{
	if (ac != 2)
	{
		dprintf(2, "USAGE : monty file\n");
		exit(EXIT_FAILURE);
	}
}
