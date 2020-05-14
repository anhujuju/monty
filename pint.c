#include "monty.h"

/**
 *_pint - prints the value at the top of the stack in a linked list
 *@stack: pointer to first element of the list
 *@line_number: number of the line in file
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", h->n);
}