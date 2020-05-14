#include "monty.h"

/**
 *_pall - prints elements in a linked list
 *@stack: pointer to first element of the list
 *@line_number: number of the line in file
 */

void _pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
stack_t *h = *stack;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
}
}
