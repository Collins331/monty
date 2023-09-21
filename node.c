#include "monty.h"
int num;
/**
 * newnode - creates a new node
 * @i: the value to add in the node
 * Return: pointer to the new node
 */
stack_t *newnode(int i)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = i;
	new->prev = NULL;
	new->next = NULL;

	return (new);
}
/**
 * push - adds a node into stack
 * @stack: pointer to the top of stack
 * @line: the number of line a file
 * Return: void
 */
void push(stack_t **stack, unsigned int line)
{
	stack_t *temp = NULL;
	(void) line;

	temp = newnode(num);
	temp->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = temp;
	}
	*stack = temp;
}
/**
 * pall - prints all the stack value
 * @stack: the pointer to the top of stack
 * @line: unsigned integer
 * Return: void
 */
void pall(stack_t **stack, unsigned int line)
{
	stack_t *node;
	(void) line;

	node = *stack;
	while (node != NULL)
	{
		dprintf(1, "%d\n", node->n);
		node = node->next;
	}
}
/**
 * pint - prints the value at the top of the stack
 * @stack: double pointer to the head of the stack
 * @line: line number
 */
void pint(stack_t **stack, unsigned int line)
{
	if (*stack == NULL || stack == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	else
		dprintf(1, "%d\n", (*stack)->n);

}

/**
 * pop - removes the top element from the stack
 * @stack: pointer to the top of stack
 * @line: line number
 * Return: void
 */
void pop(stack_t **stack, unsigned int line)
{
	stack_t *temp;

	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	else
	{
		temp = (*stack)->next;
		free(*stack);
		if (temp)
			temp->prev = NULL;
		*stack = temp;
	}
}
