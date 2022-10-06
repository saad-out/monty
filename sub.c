#include "monty.h"

/**
 * sub - subtracts top two elements of stack (2TOS - TOS)
 * @stack: pointer to top of the stack
 * @line_number: opcode' line number
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	/* check if stack has less than 2 elements */
	if (stack && (!(*stack) || !(*stack)->prev))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	/* sub top 2 elements to TOS */
	(*stack)->prev->n -= (*stack)->n;
	pop(stack, line_number);
}
