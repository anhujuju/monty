#include "monty.h"

/**
 *_push - adds a node at the beginning of a list_t list
 *@stack: first element in the list
 *@line_number: int passed to function
 */

void _push(stack_t **stack, unsigned int line_number)
{
stack_t *newnode;
int i;

f.num = strtok(NULL, "\n\t\r ");
for (; f.num[i] != '\0'; i++)
{
if (!isdigit(f.num[i]) && f.num[i] != '-')
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
free(f.num);
free_dlistint(*stack);
free(f.str);
fclose(f.fd);
exit(EXIT_FAILURE);
}
}
if (f.num == NULL || (!isdigit(*(f.num)) && *(f.num) != '-'))
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
free(f.num);
free_dlistint(*stack);
free(f.str);
fclose(f.fd);
exit(EXIT_FAILURE);
}
newnode = malloc(sizeof(stack_t));
if (newnode == NULL)
{
fprintf(stderr, "Error: malloc failed");
free(f.num);
free(newnode);
free_dlistint(*stack);
free(f.str);
fclose(f.fd);
exit(EXIT_FAILURE);
}
newnode->n = atoi(f.num);
newnode->next = *stack;
newnode->prev = NULL;

if (*stack != NULL)
(*stack)->prev = newnode;
*stack = newnode;
}
