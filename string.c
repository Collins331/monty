#include "monty.h"
/**
 * pstr - prints string
 * @stack: the pointer to the stack
 * @line_number: the line number in monty file
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void) line_number;

	while (temp != NULL)
	{
		if (temp->n > 0 && temp->n <= 127)
		{
			printf("%c", temp->n);
		}
		else
		{
			break;
		}
		temp = temp->next;
	}
	printf("\n");
}
