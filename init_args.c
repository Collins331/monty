#include "monty.h"
/**
 * init_args - initializes the arguments
 * Return: void
 */
void init_args()
{
	args = malloc(sizeof(args_t));
	if (args == NULL)
	{
		malloc_fail();
	}
	args->stream = NULL;
	args->line = NULL;
}
