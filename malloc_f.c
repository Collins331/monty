#include "monty.h"
/**
 * malloc_fail -  handles malloc failure
 * Return: void
 */
void malloc_fail(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_args();
	exit(EXIT_FAILURE);
}
