#include "monty.h"

/**
 *_pop - removes the top element of the stack in a linked list
 *@stack: pointer to first element of the list
 *@line_number: number of the line in file
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop, stack empty", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
