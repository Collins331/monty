#include "monty.h"
/**
 * pstr - prints string
 * @stack: the pointer to the stack
 * @line_number: the line number in monty file
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	while (*stack != NULL)
	{
		if ((*stack)->n > 0 && (*stack)->n <= 127)
		{
			printf("%c", (*stack)->n);
		}
		else
		{
			break;
		}
		*stack = (*stack)->next;
	}
	printf("\n");
}
