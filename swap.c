#include "monty.h"

/**
 *_swap - swaps the top two elements of the stack in a linked list
 *@stack: pointer to first element of the list
 *@line_number: number of the line in file
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't pop, stack empty", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = *stack;
	temp->next = *stack;
	(*stack)->prev = temp;
	temp->prev = NULL;
	*stack = temp;
}
