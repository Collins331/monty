#include "monty.h"
/**
 * free_stack - frees the stack
 * @stack: pointer to the top of stack
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *node = NULL;

	node = stack;
	while (node != NULL)
	{
		free_stack(node->next);
		free(node);
	}
}
/**
 * clean_stack - frees all nodes in stack
 * @stack: pointer to the top of stack
 * Return: void
 */
void clean_stack(stack_t **stack)
{
	stack_t *temp = *stack;

	while (temp != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	fclose(cmd.fd);
	free(cmd.line);
}
