#include "monty.h"

/**
 * add - adds top two elements of stack
 * @stack: pointer to top of the stack
 * @line_number: opcode' line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	/* check if stack has less than 2 elements */
	if (stack && (!(*stack) || !(*stack)->prev))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	/* add top 2 elements to TOS */
	(*stack)->prev->n += (*stack)->n;
	pop(stack, line_number);
}
