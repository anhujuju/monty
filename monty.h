#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define UNUSED(x) (void)(x)
#define LINE_MAX 1024

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern int SQ;
instruction_t *parse_line(char *line);
void free_stack(stack_t *head);
char *get_opcode(char *string);
int is_int(char *str);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);


#endif
