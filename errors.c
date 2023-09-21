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
/**
 *open_error - prints an open file error message
 *@file: file
 * Return: FAILURE
 */

void open_error(char *file)
{
	dprintf(2, "Error: Can't open file %s\n", file);

	exit(EXIT_FAILURE);

}

/**
 * push_error - handles a push error
 * @fd: file desciptor
 * @line: buffer
 * @stack:  stack or queue
 * @line_number: line number of the command
 */

void push_error(FILE *fd, char *line, stack_t *stack, int line_number)
{
	dprintf(2, "L%u: usage: push integer\n", line_number);
	fclose(fd);
	free(line);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * instr_error - Error handler for unknown instructions
 * @fd: file descriptor
 * @line: buffer
 * @stack:  stack or queue
 * @line_n: line number of the command
 * @val: instruction
 */

void instr_error(FILE *fd, char *line, stack_t *stack, char *val, int line_n)
{
	dprintf(2, "L%u: unknown instruction %s\n", line_n, val);
	fclose(fd);
	free(line);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
